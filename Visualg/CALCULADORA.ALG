algoritmo "Calculadora"
var
   Esc, S, C: Inteiro
   N1, N2, R: Real
inicio
      EscrevaL ("----------------------------------------------------")
      EscrevaL ("                   CALCULADORA")
      EscrevaL ("----------------------------------------------------")
      EscrevaL ("[1] Para executar uma soma.")
      EscrevaL ("[2] Para executar uma subtração.")
      EscrevaL ("[3] Para executar uma multiplicação.")
      EscrevaL ("[4] Para executar uma divisão.")
      EscrevaL ("----------------------------------------------------")
      Escreva ("Digite o número que corresponde a operação desejada: ")
      Leia (Esc)
      EscrevaL ("----------------------------------------------------")
      Se (Esc = 1) entao
         EscrevaL ("Quantos números deseja somar?")
         Leia (S)
         C <- 1
         Enquanto (C <= S) faca
            EscrevaL ("Digite o ",C,"o. número: ")
            Leia (N1)
            R <- (N1 + R)
            C <- C + 1
         FimEnquanto
      EscrevaL ("O resultado da soma é:",R:6:3)
      Senao
         Se (Esc = 2) entao
            EscrevaL ("Quantos números deseja subtrair?")
            Leia (S)
            C <- 1
            EscrevaL ("Digite o número base: ")
               Leia (N1)
               R <- N1
               Enquanto (C <= S) faca
                   EscrevaL ("Digite o ",C, "o. número a ser subtraído: ")
                   Leia (N2)
                   R <- R - N2
                   C <- C + 1
            FimEnquanto
         EscrevaL ("O resultado da subtração é:",R:6:3)
         Senao
              Se (Esc = 3) entao
                 EscrevaL ("Quantas vezes deseja multiplicar?")
                 Leia (S)
                 C <- 1
                 EscrevaL ("Digite o número base: ")
                 Leia (N1)
                 R <- N1
                 Enquanto (C <= S) faca
                    EscrevaL ("Digite o ",C,"o. número que deseja multiplicar: ")
                    Leia (N2)
                    R <- R * N2
                    C <- C + 1
                 FimEnquanto
                 EscrevaL ("O resultado da multiplicação é:",R:6:3)
              Senao
                   Se (Esc = 4) entao
                      EscrevaL ("Quantas vezes deseja dividir?")
                      Leia (S)
                      C <- 1
                      EscrevaL ("Digite o número base: ")
                      Leia (N1)
                      R <- N1
                      Enquanto (C <= S) faca
                         EscrevaL ( "Digite o ",C,"o. número que deseja dividir: ")
                         Leia (N2)
                         R <- R / N2
                         C <- C + 1
                      FimEnquanto
                      EscrevaL ("O resultado da divisão é:",R:6:3)
                   FimSe
              FimSe
         FimSe
      FimSe
fimalgoritmo