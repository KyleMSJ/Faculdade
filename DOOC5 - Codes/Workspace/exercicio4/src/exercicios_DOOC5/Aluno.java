package exercicios_DOOC5;

public class Aluno {
	public String nome;
	public double n1, n2, n3, media;
	
	public void calcularNota() {
		this.media = (this.n1 + this.n2 + this.n3)/ 3;			
	}
	
	public void exibirResultado()
	{
		System.out.println(nome);
		System.out.println("Media: " + String.format("%.02f", media));
		if (this.media < 6) {
			System.out.println("Reprovado");
		}
		else {
			System.out.println("Aprovado!");
		}
	}
}
