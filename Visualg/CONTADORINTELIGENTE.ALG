algoritmo "ContadorInteligente"
var
   N1, N2, C: Inteiro
inicio
      EscrevaL ("Digite o primeiro número: ")
      Leia (N1)
      EscrevaL ("Digite o segundo número: ")
      Leia (N2)

      Se (N1 > N2) entao
         EscrevaL ("-----------")
         EscrevaL ("CONTANDO...")
         EscrevaL ("-----------")
         C <- N1
         EEscrevaL ("-----------")
      EscrevaL ("CONTANDO...")
      EscrevaL ("-----------")W
         Enquanto (C >= N2) faca
            Escreva (C,",")
            C <- C - 1
         FimEnquanto
      Senao
         Se (N1 < N2) entao
            EscrevaL ("-----------")
            EscrevaL ("CONTANDO...")
            EscrevaL ("-----------")
            C <- N1
            Enquanto (C <= N2) faca
               Escreva (C,",")
               C <- C + 1
            FimEnquanto
         Senao
            EscrevaL ("Números Iguais")
         FimSe
      FimSe
fimalgoritmo