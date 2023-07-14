package perfil;

public abstract class Pessoa implements Perfil { // abstract: não pode ser instanciada, serve como "esqueleto" para definir outras classes. implements: a responsabilidade cai para as classes filhas
    private String cpf;
    private String nome;
    protected double taxa;
    public String getCpf(); {
        return cpf;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
}