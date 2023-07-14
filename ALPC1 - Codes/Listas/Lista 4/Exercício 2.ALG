Algoritmo "Loja de artigos femininos"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 8/13/2020
Var
   // Seção de Declarações das variáveis
   qtd1, qtd2, qtd3, qtd4, qtd5, qtd6: inteiro
   valor1, valor2, valor3, valor4, valor5, valor6, valorT: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Código do produto    Produto       Preço ")
   escreval("       1          Brinco pequeno   R$2,00")
   escreval("       2            Pulseira       R$3,50")
   escreval("       3             Colar         R$5,20")
   escreval("       4             Tiara         R$2,99")
   escreval("       5             Anel          R$3,80")
   escreval("       6            Relógio       R$22,50")
   escreva("Digite a quantidade de brincos: ")
   leia (qtd1)
   escreva("Digite a quantidade de pulseiras: ")
   leia (qtd2)
   escreva("Digite a quantidade de colares: ")
   leia (qtd3)
   escreva("Digite a quantidade de tiaras: ")
   leia (qtd4)
   escreva("Digite a quantidade de anéis: ")
   leia (qtd5)
   escreva("Digite a quantidade de relógios: ")
   leia (qtd6)
   valor1 <- (qtd1 * 2)
   valor2 <- (qtd2 * 3.5)
   valor3 <- (qtd3 * 5.2)
   valor4 <- (qtd4 * 2.99)
   valor5 <- (qtd5 * 3.8)
   valor6 <- (qtd6 * 22.5)
   valorT <- valor1 + valor2 +valor3 + valor4 + valor5 + valor6
   escreval("Código do produto    Produto       Preço        Quantidade Comprada     Valor Total")
   escreval("       1          Brinco pequeno   R$2,00               ", qtd1,"                R$",    valor1)
   escreval("       2            Pulseira       R$3,50               ", qtd2,"                R$",    valor2)
   escreval("       3             Colar         R$5,20               ", qtd3,"                R$",    valor3)
   escreval("       4             Tiara         R$2,99               ", qtd4,"                R$",    valor4)
   escreval("       5             Anel          R$3,80               ", qtd5,"                R$",    valor5)
   escreval("       6            Relógio       R$22,50               ", qtd6,"                R$",    valor6)
   escreval("VALOR TOTAL DA COMPRA:  R$", valorT)



Fimalgoritmo