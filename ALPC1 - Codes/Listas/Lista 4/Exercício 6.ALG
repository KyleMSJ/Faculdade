Algoritmo "Equação Quadrática"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/16/2020
Var
// Seção de Declarações das variáveis 
   delta, x1, x2, a, b, c : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreval ("Equação do segundo grau")
   Escreva ("Digite o valor de A: ")
   Leia (a)
   Escreva ("Digite o valor de B: ")
   Leia (b)
   Escreva ("Digite o valor de C: ")
   leia (c)
   Escreval ("A equação", a,"x² +", b, "x +", c, " = 0")
   delta <- (b^2) - 4*a*c
   Escreval("Valor de delta: ", delta:3:1)
   Se (delta = 0) entao
   x1 <- (-b + raizq(delta))/(2*a)
   escreval("Possui duas raízes iguais a:", x1)
   Senao
        Se (delta > 0) entao
        x1 <- (-b + raizq(delta))/ (2*a)
        x2 <- (-b - raizq(delta))/ (2*a)
        escreval("Possui duas raízes: ")
        escreval("x1 = ", x1:3:1)
        escreval("x2 = ", x2:3:1)
        Senao
             escreval("Não possui raízes reais!")
        Fimse
   Fimse
Fimalgoritmo