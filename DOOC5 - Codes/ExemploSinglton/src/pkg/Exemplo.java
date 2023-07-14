package pkg;

public final class Exemplo {
	
	 private static Exemplo instancia_unica;
	 
	 public String valorqualquer;

	 private Exemplo(String valor) {
	        this.valorqualquer = valor;
	 }

	 public static Exemplo getInstance(String valorqq) {
	        if (instancia_unica == null) {
	        	instancia_unica = new Exemplo(valorqq);
	        }
	        return instancia_unica;
	 }
}
