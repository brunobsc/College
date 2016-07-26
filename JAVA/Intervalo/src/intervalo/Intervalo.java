/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package intervalo;
import javax.swing.*;

/**
 *
 * @author bruno
 */
public class Intervalo {

    public static void main(String[] args) {
        
        /*for (int i=540;i>=120;i--){
            if(i%2==0)
                JOptionPane.showMessageDialog(null, i);
                
        }*/
        
        // OU
        
        String pares="";
        for (int i=540;i>=120;i--){
           
            if(i%2==0)
              pares = pares + i + ",";              
        }
        System.out.println(pares);
        //JOptionPane.showMessageDialog(null, pares);

    }
    
}
