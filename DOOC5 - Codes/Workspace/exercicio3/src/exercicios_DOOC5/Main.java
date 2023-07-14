package exercicios_DOOC5;
import javax.swing.JOptionPane;

public class Main {
	/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5º Período Eng. Computação
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		/*3. Construa, aplicando os princípios do POO, um programa usando a linguagem de programação Java, que simule o funcionamento de uma 
		 * calculadora com as seguintes características:
			A calculadora recebe três informações e armazena uma. Das três informações recebidas, duas correspondem a valores numéricos e uma corresponde
			a um símbolo do conjunto {+, -, *, /}, os quais representam, respectivamente, as operações de adição, subtração, multiplicação e divisão.
			A informação armazenada corresponde ao resultado da operação proveniente das informações recebidas, sendo: 
	Se o símbolo fornecido for + , a calculadora calcula o resultado obtido da soma dos dois valores numéricos recebidos, armazena o resultado e o exibe.
	Se o símbolo fornecido for - , a calculadora calcula o resultado obtido da subtração do segundo valor numérico do primeiro valor numérico, 
	armazena o resultado e o exibe.
	Se o símbolo fornecido for * , a calculadora calcula o resultado obtido da multiplicação do primeiro valor numérico obtido pelo segundo valor 
	numérico obtido, armazenará o resultado e o exibe.
	Se o símbolo fornecido for / , a calculadora calcula o resultado obtido da divisão do primeiro valor numérico obtido pelo segundo valor numérico 
	obtido, armazena o resultado e o exibe.
*/
	double v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor: "));
	char op = JOptionPane.showInputDialog("Digite a operação (+, -, *, /): ").charAt(0);
	double v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor: "));
	
	calculadora c = new calculadora();
	c.valor1 = v1;
	c.op = op;
	c.valor2 = v2;
	c.calcular();
	}

}
