package exercicios_DOOC5;
import javax.swing.JOptionPane;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*4.	Escreva uma classe cujos objetos representam alunos de uma determinada disciplina. Cada objeto (aluno) deve ser capaz de informar se
		 * ele est� ou n�o aprovado na disciplina. O aluno est� aprovado se a m�dia final � maior ou igual a 6. A m�dia final � calculada 
		 * da seguinte forma: m�dia aritm�tica das notas dos instrumentos de avalia��o (tr�s instrumentos de avalia��o), as quais correspondem 
		 * a valores num�ricos que, al�m do nome do aluno, s�o guardados em cada objeto (aluno). 
		 * Fa�a um programa, usando a linguagem de programa��o Java, que crie tr�s alunos. O programa deve receber do usu�rio as informa��es 
		 * de cada aluno e, para cada um, informar se ele est� ou n�o aprovado.
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
