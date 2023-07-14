Algoritmo "Reajuste"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/15/2020
Var
// Seção de Declarações das variáveis 
   produto, reajuste: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva ("Qual é o preço do produto? ")
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
   Escreva ("O novo valor é de:", reajuste, " R$")

Fimalgoritmo