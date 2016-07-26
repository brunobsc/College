/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package ex2;

/**
 *
 * @author professor
 */
public class Lampada {
    String marca;
    String cor;
    int volts;
    int estado;
    boolean acesa,apagada,meialuz;

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public int getVolts() {
        return volts;
    }

    public void setVolts(int volts) {
        this.volts = volts;
    }

    public int getEstado() {
        return estado;
    }

    public void setEstado(int estado) {
        this.estado = estado;
        switch(estado){
                case 1:
                    this.acesa=true;
                    this.apagada=false;
                    this.meialuz=false;
                    break;
                case 2:
                    this.acesa=false;
                    this.apagada=true;
                    this.meialuz=false;
                    break;
                case 3:
                    this.acesa=false;
                    this.apagada=false;
                    this.meialuz=true;
                    break;
        }
        
    }

    public boolean isAcesa() {
        return acesa;
    }

    public void setAcesa(boolean acesa) {
        this.acesa = acesa;
    }

    public boolean isApagada() {
        return apagada;
    }

    public void setApagada(boolean apagada) {
        this.apagada = apagada;
    }

    public boolean isMeialuz() {
        return meialuz;
    }

    public void setMeialuz(boolean meialuz) {
        this.meialuz = meialuz;
    }


}
