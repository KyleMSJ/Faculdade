package exemplo;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Iab iac = new ClasseA();
		//Iab iac = new ClasseC();
		
		ClasseB b = new ClasseB();
		b.iab = iac;
		b.usaServico();
	}

}
