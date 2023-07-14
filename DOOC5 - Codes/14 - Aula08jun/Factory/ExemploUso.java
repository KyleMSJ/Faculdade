package uso;

import javax.swing.JOptionPane;

import perfil.FactoryPessoa;
import perfil.Perfil;

public class ExemploUso {

    public static void main(String[] args){
        /*Professor p = new Professor();
        System.out.println(p.calcMulta(10));

        ALTO ACOPLAMENTO

        Aluno a = new Aluno();
        System.out.println(a.calcMulta(20));*/

        // O factory esconde a lógica do 'new'
        Perfil p;
        /*p = FactoryPessoa.getPessoa(args[0]); Modo mais geral: retorna null se a entrada do usuário não coincidir com os identificadores na classe FactoryPessoa
        JOptionPane.showMessageDialog(null, p.calcMulta(10)); */

        p = FactoryPessoa.getPessoa("Professor");
        JOptionPane.showMessageDialog(null, p.calcMulta(10));
        p = FactoryPessoa.getPessoa("Aluno");
        JOptionPane.showMessageDialog(null, p.calcMulta(10));
    }
}