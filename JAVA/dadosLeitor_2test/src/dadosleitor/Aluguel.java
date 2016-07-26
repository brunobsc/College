/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dadosleitor;

import javax.swing.JOptionPane;

public class Aluguel{
    
    public int ra;
    public String nome;
    public int cpf;
    public String curso;
       
    public void setra(int ra){
        this.ra = ra;
    }
    public int getra(){
        return ra;
    }
    public void setnome(String nome){
        this.nome = nome;
    }
    public String getnome(){
        return nome;
    }
    public void setcpf(int cpf){
        this.cpf = cpf;
    }
    public int getcpf(){
        return cpf;
    }
    public void setcurso(String curso){
        this.curso = curso;
    }
    public String getcurso(){
        return curso;
    }
    
    public String mostrarDadosLeitor(){
        return "Ra: "+ra+"\nNome: "+nome+"\nCPF: "+cpf+"\nCurso: "+curso;
    }
}
