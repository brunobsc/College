/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package exrev2;

/**
 *
 * @author professor
 */
import javax.swing.*;

public class Aluno {
    String nome,sobrenome,idade,curso;
    public void InsiraNomeSobrenome(){
        nome = JOptionPane.showInputDialog("Insira seu Nome: ");
        sobrenome = JOptionPane.showInputDialog("Insira seu Sobrenome: ");
    }
    public void InsiraIdade(){
        idade = JOptionPane.showInputDialog("Insira sua Idade: ");
    }
    public void InsiraCurso(){
        curso = JOptionPane.showInputDialog("Insira o seu Curso: ");
    }


}
