package exercicios_DOOC5;

import javax.swing.JOptionPane;

public class Main {
/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5� Per�odo Eng. Computa��o
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		/* 1.	Usando a linguagem de programa��o Java, crie uma classe denominada Funcion�rio que possua os seguintes atributos:
		 * matricula (registro do funcion�rio), nome, salario, situa��o (valor booleano que indica se o funcion�rio est� ativo 
		 * ou n�o na empresa).
		 * A classe deve ter os seguintes m�todos: 
		 * Reajustar: quando executado atualiza o sal�rio do funcion�rio conforme uma porcentagem informada ao objeto. 
		 * Demitir: quando executado atualiza a situa��o do funcion�rio. 
		 * Imprimir: quando executado imprime, na tela, as informa��es do funcion�rio. 
		 * Fa�a um programa que use a classe criada.. 
*/
		
		funcionario f = new funcionario();
		
		int x;
		do {
			 x = Integer.parseInt(JOptionPane.showInputDialog("1 - Registrar \n2 - Mostrar \n3 - Reajustar \n4 - Sair"));
			 if ((x <= 0) || (x > 4)) {
				 System.out.println("n�mero inv�lido!");
			 }else {
			 switch (x) {
			 case 1:
				f.nome = JOptionPane.showInputDialog("Nome: ");
				f.situacao = Boolean.parseBoolean(JOptionPane.showInputDialog("Situa��o: "));
				f.matricula = Integer.parseInt(JOptionPane.showInputDialog("ID: "));
				f.salario = Double.parseDouble(JOptionPane.showInputDialog("Sal�rio: "));
			 break;
			 case 2:
				 f.Imprimir();
			 break;
			 case 3:
			 	f.Reajustar(Double.parseDouble(JOptionPane.showInputDialog("Ajuste: (%)")));
			 break;
			 }
			 }
			 }while(x != 4);

	}

}
