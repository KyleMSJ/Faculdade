package pkg;

public class ServicoTipo1Adapter implements ServicoTipo1{

	ServicoTipo2 st2;
	
	public ServicoTipo1Adapter(ServicoTipo2 st2){
		this.st2 = st2;
	}
	// TEM-SE O SERVICO 1 COM COMPORTAMENTO DO SERVICO 2
	@Override
	public void executaServicoTipo1() {
		// TODO Auto-generated method stub
		st2.executaServicoTipo2();
	}

	
}
