package exercicios_DOOC5;

import java.util.Scanner;

public class Main {
	/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5� Per�odo Eng. Computa��o
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*2. Construa, aplicando os princ�pios do POO, usando a linguagem de programa��o Java, um software que
		 *  simule a opera��o de um conversor monet�rio.
		 *  Esse equipamento recebe tr�s informa��es: valor a ser convertido, a taxa (valor de refer�ncia da convers�o) 
		 *  e o tipo de convers�o a ser feita (Real:Dolar; Dolar:Real).
		 *  Todas as informa��es s�o dadas pelo usu�rio.
		 *  Dadas essas informa��es o equipamento faz a convers�o do valor informado exibindo-o para o usu�rio.
		 */
		Scanner scan = new Scanner(System.in);
		System.out.println("Digite o valor a ser convertido: ");
		double v = scan.nextDouble();
		System.out.println("Digite a taxa para convers�o: ");
		double t = scan.nextDouble();
		System.out.println("Digite o tipo de convers�o: \n(Real -> Dolar, digite 'Dolar' \n Dolar -> Real, digite 'Real')");
		String type = scan.next();
		Conversao c = new Conversao();
		
		c.Converte(v, t, type);
		
		
	}

}
