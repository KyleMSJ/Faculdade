Algoritmo "Decrescente"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/15/2020
Var
// Seção de Declarações das variáveis 
   valor1, valor2, valor3: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva("Digite um valor inteiro: ")
   Leia(valor1)
   Escreva("Digite outro valor inteiro: ")
   Leia(valor2)
   Escreva("Digite mais um valor inteiro: ")
   Leia(valor3)
   Se (valor1 > valor2) e (valor2 > valor3) entao
   Escreva(valor1, valor2, valor3)
   Senao
        Se (valor1 > valor2) e (valor3 > valor2) e (valor3 < valor1) entao
        Escreva (valor1, valor3, valor2)
        Senao
             Se (valor2 > valor3) e (valor3 > valor1) entao
             Escreva(valor2, valor3, valor1)
             Senao
                  Se (valor2 > valor3) e (valor1 > valor3) e (valor1 < valor2) entao
                  Escreva (valor2, valor1, valor3)
                  Senao
                       Se (valor3 > valor1) e (valor1 > valor2) entao
                       Escreva (valor3, valor1, valor2)
                       Senao
                            Se (valor3 > valor2) e (valor2 > valor1) entao
                            Escreva (valor3, valor2, valor1)
                            Fimse
                       Fimse
                  Fimse
             Fimse
        Fimse
   Fimse
   

Fimalgoritmo