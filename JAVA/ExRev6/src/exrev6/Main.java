/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package exrev6;

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
        int num=1,pos=0,neg=0;
        do{
            num = Integer.parseInt(JOptionPane.showInputDialog("Insira um valor: "));
            if (num>0)
                pos+=num;
            else if (num<0)
                neg+=num;
        }while(num!=0);
        JOptionPane.showMessageDialog(null,
                "A soma dos número POSITIVOS é: "+pos+
                "\nA soma dos Números NEGATIVOS é: "+neg);
    }

}
