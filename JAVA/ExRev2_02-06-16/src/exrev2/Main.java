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
        Peixe P = new Peixe();
        Cachorro C = new Cachorro();
        int opcao;
    do{
       opcao=Integer.parseInt(JOptionPane.showInputDialog("Menu:\n1) Peixe\n2) Cachorro\n3) Sair"));
       switch(opcao){
           case 1:
            P.setNome(JOptionPane.showInputDialog("Entre o Nome: "));
            P.setPeso(Double.parseDouble(JOptionPane.showInputDialog("Entre o peso: ")));
            P.setTipoHabitat(JOptionPane.showInputDialog("Entre o Habitat: "));
            JOptionPane.showMessageDialog(null, "Nome: "+P.nome+"\nPeso: "+P.peso+"\nHabitat: "+P.tipoHabitat);
            break;
           case 2:
            C.setNome(JOptionPane.showInputDialog("Entre o Nome: "));
            C.setPeso(Double.parseDouble(JOptionPane.showInputDialog("Entre o peso: ")));
            C.setRaca(JOptionPane.showInputDialog("Entre o Raça: "));
            JOptionPane.showMessageDialog(null, "Nome: "+C.nome+"\nPeso: "+C.peso+"\nRaça: "+C.raca);
            break;
       }
    }while(opcao!=3);
   }
}
