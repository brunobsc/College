/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package ex1;
import javax.swing.*;
/**
 *
 * @author professor
 */
public class Produto {
    String nome;
    double precoDaCompra;
    double precoDaVenda;
    double lucro;

    public double getLucro() {
        return lucro;
    }

    public void setLucro(double lucro) {
        this.lucro=lucro;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getPrecoDaCompra() {
        return precoDaCompra;
    }

    public void setPrecoDaCompra(double precoDaCompra) {
        this.precoDaCompra = precoDaCompra;
    }

    public double getPrecoDaVenda() {
        return precoDaVenda;
    }

    public void setPrecoDaVenda(double precoDaVenda) {
        if (precoDaVenda<precoDaCompra){
            JOptionPane.showMessageDialog(null, "Com este valor não haverá lucro !!!");
        }
        this.precoDaVenda = precoDaVenda;
    }
    

}
