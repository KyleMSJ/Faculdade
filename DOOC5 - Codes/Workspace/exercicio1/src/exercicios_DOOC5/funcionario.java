package exercicios_DOOC5;

public class funcionario {
	int matricula;
	String nome;
	double salario;
	boolean situacao;
	
	public void Reajustar(double p)
	{
		this.salario = salario * (1+(p/100));
	}
	
	public void Demitir(boolean sit)
	{
		situacao = sit;
	}

	public void Imprimir()
	{
		System.out.println(" Matricula: " + this.matricula + "\n Nome: " + this.nome + "\n Salário: " + this.salario);
		if (situacao)
		{
			System.out.println(" Empregado");
		}
		else {
			System.out.println(" Demitido");
		}
	}
}	

