package dadosleitor;

import javax.swing.*;

public class DadosLeitor {

    public static void main(String[] args) {

        Aluguel leitores = new Aluguel();
        
                      
        
while(true){ //Adicionei o While para ficar em loop o menu.
    int tipo = Integer.parseInt(JOptionPane.showInputDialog(" Menu:\n 1) Criar Leitor\n"
                + " 2) Mostrar dados do Leitor\n 3) Sair"));
        switch (tipo) {
            case 1: //Aqui nos itens abaixo eu adicionei os set's dos itens (com base no q vc criou: Aluguel leitores = new Aluguel();)
                //Onde o apelido é leitores ---- Ex: leitores.setNOME_DO_ITEM(JOptionPane.XXXX) - OBS: se for int ou double precisa usar o X.parseX
                leitores.setcpf(Integer.parseInt(JOptionPane.showInputDialog(" Entre com o CPF do Leitor: ")));
                leitores.setcurso(JOptionPane.showInputDialog(" Entre com o Curso do Leitor: "));
                leitores.setnome(JOptionPane.showInputDialog(" Entre com o Nome do Leitor: "));
                leitores.setra(Integer.parseInt(JOptionPane.showInputDialog(" Entre com o RA do Leitor: ")));
                break;

            case 2:
                leitores.mostrarDadosLeitor();
                break;

            case 3:
                JOptionPane.showMessageDialog(null, " Voce Escolheu Sair !");
                System.exit(0);
                } 
            }   
    }
}

