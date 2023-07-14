import pacote.*; // importa todas as classes do package "pacote"

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("teste");
		
		Usuario u1 = new Usuario(); // Instanciando um objeto
		
		u1.nome = "zé";
		u1.idade = 20;
		u1.fala();
		
		System.out.println(u1.nome);
		
		Usuario u2 = new Usuario();
		u2.nome = "joão";
		u2.idade = 25;
		
		int[] vetor = new int[5];
		vetor[0] = 9;
		
		Pessoa[] pessoas = new Pessoa[5];
		
		Pessoa p1 = new Pessoa();
		Pessoa p2 = new Pessoa();
		p1.nome = "Luíz";
		p1.idade = 34;
		p2.nome = "Furlan";
		p2.idade = 18;
		
		pessoas[0] = p1;
		pessoas[1] = p2;
		
		Pessoa[] pessoas2 = {p1, p2};
		
		int[][] m = new int[5][5];
		
		System.out.println(pessoas2[0].nome);
		
		Pessoa p3 = pessoas2[1];
		
		System.out.println(p3.nome);
		
		
	}

}
