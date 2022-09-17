algoritmo "0ateX"
var
   Contador, NumUser, Salto: Inteiro
inicio
   Escreva ("Digite um número: ")
   Leia (NumUser)
   Escreva ("Deseja saltar quantos números por vez? ")
   Leia (Salto)
   Contador <- 0
   Enquanto (Contador <= NumUser) faca
      Escreval (Contador)
      Contador <- Contador + (Salto)
   FimEnquanto
fimalgoritmo