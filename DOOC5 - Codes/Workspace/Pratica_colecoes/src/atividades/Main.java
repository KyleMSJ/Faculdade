package atividades;
import java.util.ArrayList; // importando o pacote ArrayList
import javax.swing.JOptionPane;

import java.util.List;
        
/*Crie um programa, usando a linguagem de programação Java e o paradigma orientado a objetos, que armazene, em memória primária,
os dados de um conjunto de pessoas e seus respectivos animais de estimaÃ§Ã£o. SÃ£o dados da pessoa: cpf, nome. SÃ£o dados do animal: 
código, nome, raça. O programa deve armazenar pessoas enquanto o usuário desejar. Apóss registrar todas as pessoas que o usuário desejar, 
o programa deve listar os dados de todas as pessoas registradas e, também de seus respectivos animais.*/

public class Main 
{
	// @ author Caio Marcelo - PC3011259
	public static void main(String [] args){

	int opt1, opt2 = 0;
	ArrayList<pessoa> pessoas = new ArrayList<>();
    List<String>nomesPessoa = new ArrayList<>();
    List<String>cpfPessoa = new ArrayList<>();
   
        
	pessoa p = new pessoa();
        do
		{
		p.nome = JOptionPane.showInputDialog("Digite seu nome: ");
		nomesPessoa.add(p.nome);
		p.cpf = JOptionPane.showInputDialog("Digite seu cpf: ");
        cpfPessoa.add(p.cpf);
            do
            {
            p.a.nome = JOptionPane.showInputDialog("Digite o nome do seu pet: ");
            p.nomePets.add(p.a.nome);
            p.a.especie = JOptionPane.showInputDialog("Digite a espécie do seu pet: ");
            p.racaPets.add(p.a.especie);
            opt1 = Integer.parseInt(JOptionPane.showInputDialog("Tem mais algum animal de estimação? \n 1 - Sim \n 2 - Não"));
            pessoas.add(p);
            p.a.cod++;
            } while (opt1 != 2);
            opt2 = Integer.parseInt(JOptionPane.showInputDialog("Deseja realizar mais um cadastro? \n 1 - Sim \n 2 - Não"));
		} while (opt2 != 2);
               
        
	for (pessoa dono : pessoas)
	{
		System.out.println("\nDono: " + nomesPessoa + " | CPF: " + cpfPessoa);
		System.out.println("\nNome do Pet: " + dono.nomePets + "\t | Espécie: " + dono.racaPets);              
	}

}
}