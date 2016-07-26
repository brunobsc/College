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
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Aluno A = new Aluno();
        A.InsiraNomeSobrenome();
        A.InsiraIdade();
        A.InsiraCurso();
        JOptionPane.showMessageDialog(null,"Nome: "+A.nome+"\n"+
                "Sobrenome: "+A.sobrenome+"\n"+
                "Idade: "+A.idade+"\n"+
                "Curso: "+A.curso+"\n");
    }

}
