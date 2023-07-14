package exemploAula;

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
	

	ArrayList<Animal> c = new ArrayList<Animal>(); // instanciando um objeto 'c' -> cole��o

	c.add(a1);
	c.add(a2);
	c.add(a3);
	c.add(a4);
	
	//int i = 0;
	// M�todo 1
	//for (i = 0; i < c.size(); i++)
	//{
	//System.out.println(c.get(i).nome);
	//}
	
	// m�todo 2 -> mais f�cil
	for (Animal bla : c) // Para cada animal contido na col��o c, ser�o realizadas as itera��es
	{
		System.out.println(bla.nome);
	}

	System.out.println(c.size());
	
	System.out.println(c.get(0)); // �ndice
	}
}