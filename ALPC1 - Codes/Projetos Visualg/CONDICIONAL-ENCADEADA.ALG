Algoritmo "Condicional-encadeada"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/05/2020
Var
// Seção de Declarações das variáveis 
   freq, media: real
   

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    Escreva ("Digite a frequência de 0 a 100: ")
    leia (freq)
    Escreva ("Digite a média de 0 a 10: ")
    leia (media)
    se (freq <75) entao
    escreva ("Reprovado")
    senao
         se (media >=6) entao
         escreva ("Aprovado")
         senao
              se (media <4) entao
              escreva ("Reprovado")
              senao
              escreva ("Recuperação")
              fimse
         fimse
    fimse
Fimalgoritmo