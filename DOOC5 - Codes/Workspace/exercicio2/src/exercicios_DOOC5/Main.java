package exercicios_DOOC5;

import java.util.Scanner;

public class Main {
	/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5º Período Eng. Computação
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*2. Construa, aplicando os princípios do POO, usando a linguagem de programação Java, um software que
		 *  simule a operação de um conversor monetário.
		 *  Esse equipamento recebe três informações: valor a ser convertido, a taxa (valor de referência da conversão) 
		 *  e o tipo de conversão a ser feita (Real:Dolar; Dolar:Real).
		 *  Todas as informações são dadas pelo usuário.
		 *  Dadas essas informações o equipamento faz a conversão do valor informado exibindo-o para o usuário.
		 */
		Scanner scan = new Scanner(System.in);
		System.out.println("Digite o valor a ser convertido: ");
		double v = scan.nextDouble();
		System.out.println("Digite a taxa para conversão: ");
		double t = scan.nextDouble();
		System.out.println("Digite o tipo de conversão: \n(Real -> Dolar, digite 'Dolar' \n Dolar -> Real, digite 'Real')");
		String type = scan.next();
		Conversao c = new Conversao();
		
		c.Converte(v, t, type);
		
		
	}

}
