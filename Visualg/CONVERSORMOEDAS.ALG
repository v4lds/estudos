algoritmo "ConversorMoedas"
var
   C, X: Inteiro
   R, D: Real
inicio
      Escreva ("Quantas vezes deseja converter? ")
      Leia (X)
      C <- 1
      Enquanto (C <= X) faca
         Escreva ("Qual o valor em R$: ")
         Leia (R)
         D <- R/5.24
         C <- C + 1
         EscrevaL ("O valor convertido é: US$",D:5:2)
      FimEnquanto
fimalgoritmo