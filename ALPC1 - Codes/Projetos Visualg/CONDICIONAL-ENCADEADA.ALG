Algoritmo "Condicional-encadeada"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/05/2020
Var
// Se��o de Declara��es das vari�veis 
   freq, media: real
   

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
    Escreva ("Digite a frequ�ncia de 0 a 100: ")
    leia (freq)
    Escreva ("Digite a m�dia de 0 a 10: ")
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
              escreva ("Recupera��o")
              fimse
         fimse
    fimse
Fimalgoritmo