import java.util.ArrayList; // importando o pacote ArrayList

public class Main 
{
	public static void main(String [] args){

	Animal a1 = new Animal();
	Animal a2 = new Animal();
	Animal a3 = new Animal();
	Animal a4 = new Animal();
	a1.nome = "1";
	a2.nome = "2";
	a3.nome = "3";
	a4.nome = "4";
	
	Pessoa p = new Pessoa();
	p.nome = "ze";
	p.cpf = "123";
	p.animais.add(a1);
	p.animais.add(a2);
	p.animais.add(a3);
	p.animais.add(a4);
	
	p.passeiaComAnimal();

	/*ArrayList c = new ArrayList(); // instanciando um objeto 'a' -> coleção

	c.add(a1);
	c.add(a2);
	c.add(a3);
	c.add(a4);*/
	
	int i = 0;
	// Método 1
	for (i = 0; i < c.size(); i++)
	{
	System.out.println(c.get(i).nome);
	}
	// Método 2 -> mais fácil
	for (Animal bla : c) // Para cada animal contido na coleção c, serão realizadas as iterações
	{
		System.out.println(bla.nome)
	}

	System.out.println(c.size());
	
	System.out.println(a.get(0)); // índice
	}
}