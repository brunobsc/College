/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package ex2;
import javax.swing.*;
/**
 *
 * @author professor
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Lampada L = new Lampada();
        L.setMarca(JOptionPane.showInputDialog("Marca: "));
        L.setCor(JOptionPane.showInputDialog("Cor: "));
        L.setVolts(Integer.parseInt(JOptionPane.showInputDialog("Voltagem: ")));
        L.setEstado(Integer.parseInt(JOptionPane.showInputDialog("Estados:\n1 -Acesa\n2 - Apagada\n3 - Meia-Luz ")));

        if (L.isAcesa()==true){
            JOptionPane.showMessageDialog(null, "Acesa");
        }
        else if (L.isApagada()==true){
            JOptionPane.showMessageDialog(null, "Apagada");
        }
        else if (L.isMeialuz()==true){
            JOptionPane.showMessageDialog(null, "Meia-Luz");
        }

    }

}
