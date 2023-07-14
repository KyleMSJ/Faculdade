package pkg;

public final class Exemplo { // não pode ser extendida

    private static Exemplo instancia_unica; // atributo compartilhado

    public String valorqualquer;

    private Exemplo (String value) { // construtor privado
        this.valorqualquer = value;
    }

    public static Exemplo getInstance(String valorqq) { // método estático 
        if (instancia_unica == null){ // Ele sendo nulo
            instancia_unica = new Exemplo(valorqq); // a instância é criada pelo construtor
        } // não sendo nulo, devolve o que já existe
        return instancia_unica; 
    }
}