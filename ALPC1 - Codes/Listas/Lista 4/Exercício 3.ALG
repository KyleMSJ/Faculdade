Algoritmo "Reajuste"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/15/2020
Var
// Se��o de Declara��es das vari�veis 
   produto, reajuste: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   Escreva ("Qual � o pre�o do produto? ")
   Leia (produto)
   Se (produto >= 0) e (produto <= 10) entao
      reajuste <- produto * 1.3
   Senao
       Se(produto > 10) e (produto <= 20) entao
           reajuste <- produto * 1.25
       Senao
            Se(produto > 20) e (produto <= 30) entao
                reajuste <- produto * 1.2
            Senao
                 Se(produto > 30) e (produto <= 100) entao
                     reajuste <- produto * 1.15
                 Senao
                      Se (produto > 100) entao
                          reajuste <- produto * 1.1
                      Fimse
                 Fimse
            Fimse
       Fimse
   Fimse
   Escreva ("O novo valor � de:", reajuste, " R$")

Fimalgoritmo