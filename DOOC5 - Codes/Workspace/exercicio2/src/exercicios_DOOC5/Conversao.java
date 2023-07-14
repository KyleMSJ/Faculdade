package exercicios_DOOC5;

public class Conversao {
	double valor;
	
	public double Converte(double v, double t, String type)
	{
		if (type.contentEquals("Real"))
		{
			this.valor = v*t;
			System.out.print("R$ " + String.format("%.2f", valor));
			
		}
		else if (type.contentEquals("Dolar"))
		{
			this.valor = v/t;
			System.out.print("$ " + String.format("%.2f", valor));
		}
		return valor;
	}
}
