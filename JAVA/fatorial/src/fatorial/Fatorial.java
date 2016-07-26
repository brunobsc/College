/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fatorial;
import javax.swing.*;
/**
 *
 * @author bruno
 */
public class Fatorial {

    public static void main(String[] args) {
        long num,soma=1;
        num = Integer.parseInt(JOptionPane.showInputDialog("Insira um valor positivo e inteiro:"));
        for (int i=1;i<=num;i++){
            soma = soma * i;
        }
        JOptionPane.showMessageDialog(null, soma);
    }
    
}
