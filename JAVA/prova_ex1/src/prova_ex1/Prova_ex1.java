/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prova_ex1;

import javax.swing.*;

/**
 *
 * @author bruno
 */
public class Prova_ex1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n=1,i=1,maior=0;
        do{
            n=Integer.parseInt(JOptionPane.showInputDialog("Insira o "+i+"o valor."));
            if (i==1)
                maior=n;
            else if (n>maior)
                maior=n;
            i++;
        }while(n!=0);
        JOptionPane.showMessageDialog(null,"Maior: "+maior+".");
    }
    
}
