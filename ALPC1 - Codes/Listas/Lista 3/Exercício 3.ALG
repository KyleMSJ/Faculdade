Algoritmo "IMC"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2020
Var
// Seção de Declarações das variáveis
   nome: caracter
   peso, altura, IMC: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   escreval ("IMC - Índice de Massa Corporal é uma medida usada para avaliar")
   escreval ("o grau de obesidade de uma pessoa.")
   escreva ("Nome do usuário: ")
   leia (nome)
   escreva ("Peso do usuário (em kg): ")
   leia (peso)
   escreva ("Altura do usuário (em metros): ")
   leia (altura)
   IMC <- peso / altura^2
   se IMC < 17.00 entao
      escreval ("Muito abaixo do peso")
   senao
        se (IMC > 17.00) e (IMC <= 18.49) entao
           escreval ("Abaixo do peso")
        senao
           se (IMC > 18.5) e (IMC <= 24.99) entao
              escreval ("Peso normal")
           senao
                se (IMC > 25.00) e (IMC <= 29.99) entao
                   escreval ("Acima do peso")
                senao
                
                     se (IMC > 30.00) e (IMC <= 34.99) entao
                        escreval ("Obesidade I")
                     senao
                          se (IMC > 35.00) e (IMC <= 39.99) entao
                             escreval ("Obesidade II (severa)")
                          senao
                               se (IMC > 40.00) entao
                                  escreval ("Obesidade III (mórbida)")
                               fimse
                          fimse
                     fimse
                fimse
           fimse
        fimse
   fimse

   escreva (nome, ", o valor do seu IMC é ", IMC:3:1)
Fimalgoritmo