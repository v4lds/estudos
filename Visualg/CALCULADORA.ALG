algoritmo "Calculadora"
var
   Esc, S, C: Inteiro
   N1, N2, R: Real
inicio
      EscrevaL ("----------------------------------------------------")
      EscrevaL ("                   CALCULADORA")
      EscrevaL ("----------------------------------------------------")
      EscrevaL ("[1] Para executar uma soma.")
      EscrevaL ("[2] Para executar uma subtra??o.")
      EscrevaL ("[3] Para executar uma multiplica??o.")
      EscrevaL ("[4] Para executar uma divis?o.")
      EscrevaL ("----------------------------------------------------")
      Escreva ("Digite o n?mero que corresponde a opera??o desejada: ")
      Leia (Esc)
      EscrevaL ("----------------------------------------------------")
      Se (Esc = 1) entao
         EscrevaL ("Quantos n?meros deseja somar?")
         Leia (S)
         C <- 1
         Enquanto (C <= S) faca
            EscrevaL ("Digite o ",C,"o. n?mero: ")
            Leia (N1)
            R <- (N1 + R)
            C <- C + 1
         FimEnquanto
      EscrevaL ("O resultado da soma ?:",R:6:3)
      Senao
         Se (Esc = 2) entao
            EscrevaL ("Quantos n?meros deseja subtrair?")
            Leia (S)
            C <- 1
            EscrevaL ("Digite o n?mero base: ")
               Leia (N1)
               R <- N1
               Enquanto (C <= S) faca
                   EscrevaL ("Digite o ",C, "o. n?mero a ser subtra?do: ")
                   Leia (N2)
                   R <- R - N2
                   C <- C + 1
            FimEnquanto
         EscrevaL ("O resultado da subtra??o ?:",R:6:3)
         Senao
              Se (Esc = 3) entao
                 EscrevaL ("Quantas vezes deseja multiplicar?")
                 Leia (S)
                 C <- 1
                 EscrevaL ("Digite o n?mero base: ")
                 Leia (N1)
                 R <- N1
                 Enquanto (C <= S) faca
                    EscrevaL ("Digite o ",C,"o. n?mero que deseja multiplicar: ")
                    Leia (N2)
                    R <- R * N2
                    C <- C + 1
                 FimEnquanto
                 EscrevaL ("O resultado da multiplica??o ?:",R:6:3)
              Senao
                   Se (Esc = 4) entao
                      EscrevaL ("Quantas vezes deseja dividir?")
                      Leia (S)
                      C <- 1
                      EscrevaL ("Digite o n?mero base: ")
                      Leia (N1)
                      R <- N1
                      Enquanto (C <= S) faca
                         EscrevaL ( "Digite o ",C,"o. n?mero que deseja dividir: ")
                         Leia (N2)
                         R <- R / N2
                         C <- C + 1
                      FimEnquanto
                      EscrevaL ("O resultado da divis?o ?:",R:6:3)
                   FimSe
              FimSe
         FimSe
      FimSe
fimalgoritmo