package lancamentoProjetil;

  

public class Projetil {
	double x;
	double y;
	double velocidade;
	double tempo;
	double ang; 
	final double g = 9.8;
	
	public double getVelocidade() {
		return velocidade;
	}
	public void setVelocidade(double velocidade) {
		this.velocidade = velocidade;
	}
	public double getAng() {
		return ang;
	}
	public void setAng(double ang) {
		this.ang = ang;
	}
	
	public double getTempo() {
		return tempo;
	}
	public void setTempo(double tempo) {
		this.tempo = tempo;
	}
	
	public double calculaX(){
		this.x = this.velocidade* Math.cos(Math.toRadians(ang)) *(tempo);
		return this.x;
	}
	public double calculaY(){
		this.y = this.velocidade* Math.cos(Math.toRadians(ang)) *(tempo) - (g*Math.pow(tempo, 2))/2;
		return this.y;
	}
}
