/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package ex1;

/**
 *
 * @author professor
 */
import javax.swing.*;

public class testaProduto {
    Produto P = new Produto();
    public void exec(){
        P.setNome(JOptionPane.showInputDialog("Nome do Produto:"));
        P.setPrecoDaCompra(Double.parseDouble(JOptionPane.showInputDialog("Preço da Compra:")));
        P.setPrecoDaVenda(Double.parseDouble(JOptionPane.showInputDialog("Preço da Venda:")));
        P.setLucro(P.getPrecoDaVenda()-P.getPrecoDaCompra());
    }
    public void ret(){
        JOptionPane.showMessageDialog(null, "Nome: "+P.getNome()+
                      "\nPreço da Compra: "+P.getPrecoDaCompra()+
                        "\nPreço da Venda: "+P.getPrecoDaVenda()+
                                       "\nLucro: "+P.getLucro());
    }
}
