Algoritmo "Calculadora"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2020
Var
   // Se��o de Declara��es das vari�veis
   valor1, valor2, resultado: real
   operacao: caractere

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   //escreva("A proposta desse programa � calcular dois valores baseado na opera��o da sua escolha. ")
   escreva("Digite o primeiro n�mero: ")
   leia (valor1)
   escreval ("Que opera��o voc� deseja executar?")
   escreval ("1 - Soma")
   escreval ("2 - Subtra��o")
   escreval ("3 - Multiplica��o")
   escreval ("4 - Divis�o")
   leia (operacao)
   escreva ("Digite o segundo n�mero: ")
   leia (valor2)

   escolha operacao
   caso "1"
      resultado <- valor1 + valor2
   caso "2"
      resultado <- valor1 - valor2
   caso "3"
      resultado <- valor1 * valor2
   caso "4"
      resultado <- valor1 / valor2
   fimescolha

   escreva ("O resultado do c�lculo �: ", resultado)

Fimalgoritmo