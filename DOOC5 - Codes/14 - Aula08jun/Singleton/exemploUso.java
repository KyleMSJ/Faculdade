package pkg;

public class ExemploUso {

    public static void main(String[] args){
        Exemplo singleton = Exemplo.getInstance("criando1");

        Exemplo anotherSingleton = Exemplo.getInstance("criando2");

        System.out.println(singleton.valorqualqer); // Output: "criando1"

        System.out.println(anotherSingleton.valorqualqer); // Output: "criando1"
    }
}