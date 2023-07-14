package lancamentoProjetil;

import java.util.Scanner;

/*2. Usando a linguagem de programação Java, crie uma classe denominada "Projétil". 
 * O estado dos objetos dessa classe corresponde a **posição** do projetil, em um plano cartesiano  (x, y), em dado momento de **tempo** (t em segundos) 
 * em função da **velocidade** (V em m/s) e **ângulo** (Q sendo 0º < Q < 90º) em que foi disparado. 
    
    Os objetos da classe têm como ação a atualização do seu estado conforme V e Q que são fornecidos. 
    
    Faça um programa que utilize a classe Projétil criada. O programa deve listar a posição de um projétil em intervalos de 0.01 segundos até o momento em que o projétil 
    atinge o solo (quando y <= 0). Informações:    

		x = V * cos(Q)* t

		y = V * cos(Q)* t - (g*t2)/2

		g = 9.8 m/s2 (aceleração da gravidade)*/
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
			    System.out.print("Ângulo [ 1 - 89 ]: ");
			    p.setAng(scanner.nextDouble());
			} while (p.ang <= 0 || p.ang >= 90);    
			
			p.setTempo(0.01);
			do {
				System.out.println("posição x: " + String.format("%.02f",p.calculaX()));
				System.out.println("posição y: " + String.format("%.02f",p.calculaY()));
				System.out.println("tempo: " + String.format("%.02f", p.tempo));
				System.out.println("---------------------------");
				p.tempo += 0.01;
			} while (p.y >= 0);
		}
        
	}

}
