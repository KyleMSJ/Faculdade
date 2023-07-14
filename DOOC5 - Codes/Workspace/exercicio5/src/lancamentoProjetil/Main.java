package lancamentoProjetil;

import java.util.Scanner;

/*2. Usando a linguagem de programa��o Java, crie uma classe denominada "Proj�til". 
 * O estado dos objetos dessa classe corresponde a **posi��o** do projetil, em um plano cartesiano  (x, y), em dado momento de **tempo** (t em segundos) 
 * em fun��o da **velocidade** (V em m/s) e **�ngulo** (Q sendo 0� < Q < 90�) em que foi disparado. 
    
    Os objetos da classe t�m como a��o a atualiza��o do seu estado conforme V e Q que s�o fornecidos. 
    
    Fa�a um programa que utilize a classe Proj�til criada. O programa deve listar a posi��o de um proj�til em intervalos de 0.01 segundos at� o momento em que o proj�til 
    atinge o solo (quando y <= 0). Informa��es:    

		x = V * cos(Q)* t

		y = V * cos(Q)* t - (g*t2)/2

		g = 9.8 m/s2 (acelera��o da gravidade)*/
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try (Scanner scanner = new Scanner(System.in)) {
			Projetil p = new Projetil();
			
			do {
			    System.out.print("Velocidade inicial: ");
			    p.setVelocidade(scanner.nextDouble());
			} while (p.velocidade < 0);

			do {
			    System.out.print("�ngulo [ 1 - 89 ]: ");
			    p.setAng(scanner.nextDouble());
			} while (p.ang <= 0 || p.ang >= 90);    
			
			p.setTempo(0.01);
			do {
				System.out.println("posi��o x: " + String.format("%.02f",p.calculaX()));
				System.out.println("posi��o y: " + String.format("%.02f",p.calculaY()));
				System.out.println("tempo: " + String.format("%.02f", p.tempo));
				System.out.println("---------------------------");
				p.tempo += 0.01;
			} while (p.y >= 0);
		}
        
	}

}
