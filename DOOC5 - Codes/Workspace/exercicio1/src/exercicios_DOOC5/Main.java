package exercicios_DOOC5;

import javax.swing.JOptionPane;

public class Main {
/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5º Período Eng. Computação
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		/* 1.	Usando a linguagem de programação Java, crie uma classe denominada Funcionário que possua os seguintes atributos:
		 * matricula (registro do funcionário), nome, salario, situação (valor booleano que indica se o funcionário está ativo 
		 * ou não na empresa).
		 * A classe deve ter os seguintes métodos: 
		 * Reajustar: quando executado atualiza o salário do funcionário conforme uma porcentagem informada ao objeto. 
		 * Demitir: quando executado atualiza a situação do funcionário. 
		 * Imprimir: quando executado imprime, na tela, as informações do funcionário. 
		 * Faça um programa que use a classe criada.. 
*/
		
		funcionario f = new funcionario();
		
		int x;
		do {
			 x = Integer.parseInt(JOptionPane.showInputDialog("1 - Registrar \n2 - Mostrar \n3 - Reajustar \n4 - Sair"));
			 if ((x <= 0) || (x > 4)) {
				 System.out.println("número inválido!");
			 }else {
			 switch (x) {
			 case 1:
				f.nome = JOptionPane.showInputDialog("Nome: ");
				f.situacao = Boolean.parseBoolean(JOptionPane.showInputDialog("Situação: "));
				f.matricula = Integer.parseInt(JOptionPane.showInputDialog("ID: "));
				f.salario = Double.parseDouble(JOptionPane.showInputDialog("Salário: "));
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
