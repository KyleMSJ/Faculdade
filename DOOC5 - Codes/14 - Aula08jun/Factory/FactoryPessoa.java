package perfil;

public abstract class FactoryPessoa {

    public static Pessoa getPessoa(String perfil) {
        if (perfil == null){
            return null;
        }
        else if (perfil.equalsIgnoreCase("Professor")){ //se for passado o identificador "Professor"
            return new Professor();
        }
        else if (perfil.equalsIgnoreCase("Aluno")){ //se for passado identificador "Aluno"
            return new Aluno();
        else {
            return null;
        }
    }
}