/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package exrev1;

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
        int idade,n=15;
        float f1=0,f2=0,f3=0,f4=0,f5=0;
        for (int i=0;i<n;i++){
            idade = Integer.parseInt(JOptionPane.showInputDialog("Insira a idade: "));
            if (idade>0&&idade<16)
                f1++;
            else if (idade>15&&idade<31)
                f2++;
            else if (idade>30&&idade<46)
                f3++;
            else if (idade>45&&idade<61)
                f4++;
            else
                f5++;
        }
        JOptionPane.showMessageDialog(null,
                "Há "+(int)f1+" pessoas de 1 a 15 anos.\n"+
                "Há "+(int)f2+" pessoas de 16 a 30 anos.\n"+
                "Há "+(int)f3+" pessoas de 31 a 45 anos.\n"+
                "Há "+(int)f4+" pessoas de 46 a 60 anos.\n"+
                "Há "+(int)f5+" pessoas maiores de 61 anos.");
        JOptionPane.showMessageDialog(null,
                (f1/n)*100+"% das "+n+" pessoas está entre 1 a 15 anos.\n"+
                (f2/n)*100+"% das "+n+" pessoas está entre 16 a 30 anos.\n"+
                (f3/n)*100+"% das "+n+" pessoas está entre 31 a 45 anos.\n"+
                (f4/n)*100+"% das "+n+" pessoas está entre 46 a 60 anos.\n"+
                (f5/n)*100+"% das "+n+" pessoas tem mais de 61 anos.");
    }

}
