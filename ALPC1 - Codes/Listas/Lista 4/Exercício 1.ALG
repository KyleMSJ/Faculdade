Algoritmo "Calculadora"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2020
Var
   // Seção de Declarações das variáveis
   valor1, valor2, resultado: real
   operacao: caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   //escreva("A proposta desse programa é calcular dois valores baseado na operação da sua escolha. ")
   escreva("Digite o primeiro número: ")
   leia (valor1)
   escreval ("Que operação você deseja executar?")
   escreval ("1 - Soma")
   escreval ("2 - Subtração")
   escreval ("3 - Multiplicação")
   escreval ("4 - Divisão")
   leia (operacao)
   escreva ("Digite o segundo número: ")
   leia (valor2)

   escolha operacao
   caso "1"
      resultado <- valor1 + valor2
   caso "2"
      resultado <- valor1 - valor2
   caso "3"
      resultado <- valor1 * valor2
   caso "4"
      se (valor2 > 0) ou (valor2 < 0) entao
         resultado <- valor1 / valor2
      senao
         escreval ("Operação não permitida")
      fimse
   fimescolha
   escreva ("O resultado do cálculo é:", resultado)

Fimalgoritmo