import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		ArrayList<Pessoa> pessoas = new ArrayList<Pessoa>();
		ArrayList<Animal> animais = new ArrayList<Animal>();
		Scanner sc = new Scanner(System.in);
		int op = 0;
		int an = 0;
		int cod = 1;
		
		do {
		
		System.out.println("O que você deseja fazer?\n1 - Adicionar uma pessoa\n"
				+ "2 - Listar as pessoas\n3 - Encerrar o programa\n");
		op = sc.nextInt();
		
		switch(op) {
		
		case 1:
		Pessoa p1 = new Pessoa();

		System.out.println("\nQual o nome da pessoa?");
		p1.nome = sc.next();
		System.out.println("\nQual o cpf da pessoa?");
		p1.cpf = sc.next();
		
		do {
		System.out.println("\nDeseja adicionar algum animal de estimação?\n1 - Sim\n2 - Não");
		an = sc.nextInt();
		
		switch(an) {
		case 1:
			Animal a1 = new Animal();
			a1.p.cpf = p1.cpf;
			
			a1.codigo = cod;
			
			System.out.println("\nQual o nome do animal?");
			a1.nome = sc.next();
			
			System.out.println("\nQual a raça do animal?");
			a1.raca = sc.next();
			
			p1.a = a1;

			animais.add(a1);
			cod++;
			
			System.out.println("\nAnimal atribuído à pessoa com sucesso!");
		break;
		
		case 2:
		break;
		
		}
		}while(an != 2);
		
		pessoas.add(p1);
		
		
		System.out.println("\nPessoa adicionada com sucesso!\n\n");
		break;
		
		case 2: 
			for(Pessoa p : pessoas) {
				System.out.println("Nome: " +  p.nome + "\nCPF: " + p.cpf + "\n");
				if(p.a != null) {
					for(Animal a : animais) {
						if(p.cpf == a.p.cpf){
							System.out.println("\nCodigo: " + a.codigo + "\nNome: " + a.nome + "\nRaça: " + a.raca + "\n");
						}
					}
				}
			}
		break;
		
		case 3:
			System.out.println("\nO programa será encerrado!!");
		break;
		
		default:
			System.out.println("\nOpção inválida, tente novamente!!");
		break;
			
		}
		}while(op!=3);
		
	}

}