Algoritmo "M�dia"
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2020
Var
// Se��o de Declara��es das vari�veis 
   nota1, nota2, nota3, media: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva ("Digite a nota 1: ")
   leia (nota1)
   escreva ("Digite a nota 2: ")
   leia (nota2)
   escreva ("Digite a nota 3: ")
   leia (nota3)
   media <- (nota1 + nota2 + nota3)/ 3
   se media >= 6 entao
   escreval ("Aluno Aprovado!")
   senao
   escreval ("Aluno Reprovado!")
   fimse

Fimalgoritmo