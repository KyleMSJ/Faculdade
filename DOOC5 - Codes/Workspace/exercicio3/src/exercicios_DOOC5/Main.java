package exercicios_DOOC5;
import javax.swing.JOptionPane;

public class Main {
	/**
	@author Caio Marcelo da Silva de Jesus 
  	*PC3011259 - 5� Per�odo Eng. Computa��o
 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		/*3. Construa, aplicando os princ�pios do POO, um programa usando a linguagem de programa��o Java, que simule o funcionamento de uma 
		 * calculadora com as seguintes caracter�sticas:
			A calculadora recebe tr�s informa��es e armazena uma. Das tr�s informa��es recebidas, duas correspondem a valores num�ricos e uma corresponde
			a um s�mbolo do conjunto {+, -, *, /}, os quais representam, respectivamente, as opera��es de adi��o, subtra��o, multiplica��o e divis�o.
			A informa��o armazenada corresponde ao resultado da opera��o proveniente das informa��es recebidas, sendo: 
	Se o s�mbolo fornecido for + , a calculadora calcula o resultado obtido da soma dos dois valores num�ricos recebidos, armazena o resultado e o exibe.
	Se o s�mbolo fornecido for - , a calculadora calcula o resultado obtido da subtra��o do segundo valor num�rico do primeiro valor num�rico, 
	armazena o resultado e o exibe.
	Se o s�mbolo fornecido for * , a calculadora calcula o resultado obtido da multiplica��o do primeiro valor num�rico obtido pelo segundo valor 
	num�rico obtido, armazenar� o resultado e o exibe.
	Se o s�mbolo fornecido for / , a calculadora calcula o resultado obtido da divis�o do primeiro valor num�rico obtido pelo segundo valor num�rico 
	obtido, armazena o resultado e o exibe.
*/
	double v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor: "));
	char op = JOptionPane.showInputDialog("Digite a opera��o (+, -, *, /): ").charAt(0);
	double v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor: "));
	
	calculadora c = new calculadora();
	c.valor1 = v1;
	c.op = op;
	c.valor2 = v2;
	c.calcular();
	}

}
