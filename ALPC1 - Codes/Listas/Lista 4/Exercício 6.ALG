Algoritmo "Equa��o Quadr�tica"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/16/2020
Var
// Se��o de Declara��es das vari�veis 
   delta, x1, x2, a, b, c : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   Escreval ("Equa��o do segundo grau")
   Escreva ("Digite o valor de A: ")
   Leia (a)
   Escreva ("Digite o valor de B: ")
   Leia (b)
   Escreva ("Digite o valor de C: ")
   leia (c)
   Escreval ("A equa��o", a,"x� +", b, "x +", c, " = 0")
   delta <- (b^2) - 4*a*c
   Escreval("Valor de delta: ", delta:3:1)
   Se (delta = 0) entao
   x1 <- (-b + raizq(delta))/(2*a)
   escreval("Possui duas ra�zes iguais a:", x1)
   Senao
        Se (delta > 0) entao
        x1 <- (-b + raizq(delta))/ (2*a)
        x2 <- (-b - raizq(delta))/ (2*a)
        escreval("Possui duas ra�zes: ")
        escreval("x1 = ", x1:3:1)
        escreval("x2 = ", x2:3:1)
        Senao
             escreval("N�o possui ra�zes reais!")
        Fimse
   Fimse
Fimalgoritmo