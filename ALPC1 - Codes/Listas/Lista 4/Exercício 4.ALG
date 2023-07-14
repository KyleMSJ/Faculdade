Algoritmo "Idade 16_18"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2020
Var
   // Seção de Declarações das variáveis
   ano_atual, ano_nasc, idade: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc..
   escreva ("Ano Atual (yyyy): ")
   leia (ano_atual)
   escreva ("Ano de Nascimento (yyyy): ")
   leia (ano_nasc)
   idade <- ano_atual - ano_nasc
   se idade >= 18 entao
      escreval(" IDADE: ", idade, "ANOS")
      escreval(" APTO A TIRAR CARTEIRA")
      escreval("--------------------------")
      escreval(" APTO A VOTAR ")
   senao
      se idade >= 16 entao
         escreval(" IDADE:", idade, " ANOS")
         escreval(" INAPTO A TIRAR CARTEIRA")
         escreval("--------------------------")
         escreval(" APTO A VOTAR ")
      senao
         escreval(" IDADE:", idade, " ANOS")
         escreval(" INAPTO A TIRAR CARTEIRA")
         escreval("--------------------------")
         escreval(" INAPTO A VOTAR ")

      fimse
   fimse

Fimalgoritmo