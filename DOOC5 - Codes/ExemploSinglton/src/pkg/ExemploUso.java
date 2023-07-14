package pkg;

public class ExemploUso {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Exemplo singletonObj1 = Exemplo.getInstance("criando1");
        Exemplo singletonObj2 = Exemplo.getInstance("criando2");
        
        System.out.println(singletonObj1.valorqualquer);
        System.out.println(singletonObj2.valorqualquer);

	}

}
