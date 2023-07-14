package exercicios_DOOC5;
import javax.swing.JOptionPane;

public class calculadora {
	public double valor1, valor2;
	public char op;
	public double resultado;
	
	public void exibirResultado()
	{
		JOptionPane.showMessageDialog(null, "= " + this.resultado);
	}
	
	public void adicao()
	{
		this.resultado = valor1 + valor2;
		this.exibirResultado();
	}
	
	public void subtracao()
	{
		this.resultado = valor1 - valor2;
		this.exibirResultado();
	}
	
	public void multiplicacao()
	{
		this.resultado = valor1 * valor2;
		this.exibirResultado();
	}
	
	public void divisao()
	{
		if (this.valor2 != 0)
		{
			this.resultado = valor1 / valor2;
			this.exibirResultado();
		}
		else 
		{
			JOptionPane.showMessageDialog(null, "Divisão inválida", "Alerta", JOptionPane.WARNING_MESSAGE);
		}
	}
	public void calcular()
	{
		switch(op) {
		case '+':
			this.adicao();
			break;
		case '-':
			this.subtracao();
			break;
		case '*':
			this.multiplicacao();
			break;
		case '/':
			this.divisao();
			break;
		default:
			JOptionPane.showMessageDialog(null,"Símbolo Inválido", "Erro", JOptionPane.ERROR_MESSAGE);
		}
	}
}

