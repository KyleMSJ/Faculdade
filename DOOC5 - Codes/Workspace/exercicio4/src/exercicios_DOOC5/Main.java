package exercicios_DOOC5;
import javax.swing.JOptionPane;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*4.	Escreva uma classe cujos objetos representam alunos de uma determinada disciplina. Cada objeto (aluno) deve ser capaz de informar se
		 * ele está ou não aprovado na disciplina. O aluno está aprovado se a média final é maior ou igual a 6. A média final é calculada 
		 * da seguinte forma: média aritmética das notas dos instrumentos de avaliação (três instrumentos de avaliação), as quais correspondem 
		 * a valores numéricos que, além do nome do aluno, são guardados em cada objeto (aluno). 
		 * Faça um programa, usando a linguagem de programação Java, que crie três alunos. O programa deve receber do usuário as informações 
		 * de cada aluno e, para cada um, informar se ele está ou não aprovado.
		 */
		
		int cont;
		for (cont = 0; cont<=2; cont++) {
			Aluno a = new Aluno();
			String nome = JOptionPane.showInputDialog("Nome do aluno: ");
			double n1 = Double.parseDouble(JOptionPane.showInputDialog(nome + " | Nota 1: "));
			double n2 = Double.parseDouble(JOptionPane.showInputDialog(nome + " | Nota 2: "));
			double n3 = Double.parseDouble(JOptionPane.showInputDialog(nome + " | Nota 3: "));
			a.nome = nome;
			a.n1 = n1;
			a.n2 = n2;
			a.n3 = n3;
			a.calcularNota();
			a.exibirResultado();
			System.out.println("-----------------");
		}
	}
}
