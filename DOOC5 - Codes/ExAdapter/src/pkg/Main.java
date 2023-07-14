package pkg;

public class Main {
public static void main(String[] args) {
	ServicoTipo2 st2 = new Fornecedor2();
	
	//ServicoTipo1 st1 = new Fornecedor1();
	
	ServicoTipo1Adapter sta1 = new ServicoTipo1Adapter(st2);
	
	//O método executaServiço pelo servicoTipo1 (interface)
	//O ServicoTipo1Adapter implementa o ServicoTipo1 e recebe o ServicoTipo2
	//Ao implementar o serviço (método) do ServicoTipo1, o serviço (método) do
	//servicoTipo2 é chamado
	
	Cliente c = new Cliente();
	c.executaServicoTipo1(sta1);
	
}
}
