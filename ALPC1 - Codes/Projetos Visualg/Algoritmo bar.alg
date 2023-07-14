algoritmo "Bar"
// Função : Calcular valor da conta, comissao do garçom e conta final
// Autor : Caio Marcelo da Silva de Jesus
// Data : 03/03/2020
// Seção de Declarações 
var
   bebida, sanduiche, Fritas, ValorDaConta, ComissaoDoGarcom, ContaFinal: real

inicio
// Entrada
   escreva("Digite a quantidade de bebidas: ")
   leia(bebida)
   escreva("Digite  a  quantidade de sanduiches ")
   leia(sanduiche)
   escreva("Digite a quantidade de fritas")
   leia (Fritas)
   
//Processamento
       ValorDaConta <- bebida * 5.5 + sanduiche * 15 + Fritas * 10
       ComissaoDoGarcom <- ValorDaConta / 10
       ContaFinal <- ValorDaConta + ComissaoDoGarcom

//Saida
   escreval ("O valor da conta calculada foi de", ValorDaConta)
   escreval ("A comissao do garcom calculada foi de", ComissaoDoGarcom)
   escreval ("A conta final calculada foi de ", ContaFinal)
fimalgoritmo
