algoritmo "SomadorNumerico"
var
   cont, N, S, maior, menor, vezes: Inteiro
inicio
      cont <- 1
      S <- 0
      Escreval ("Quantos n?meros deseja somar? ")
      Leia (vezes)
      Enquanto (cont <= vezes) faca
         Escreva ("Digite o ", cont, "o. valor: ")
         Leia (N)
         Se (N > maior) entao
            maior <- N
         FimSe
         Se (N < menor) entao
            menor <- N
         FimSe
         S <- S + N
         cont <- cont + 1
      FimEnquanto
      Escreval ("A soma de todos os valores ?: ", S)
      Escreval ("O maior n?mero da soma foi: ", maior)
      Escreval ("O menor n?mero da soma foi: ", menor)
fimalgoritmo