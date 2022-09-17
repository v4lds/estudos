algoritmo "PlacarFutebol"
var
   N1, N2: Inteiro
inicio
      Escreval ("-----------------------")
      Escreval ("CORINTHIANS X SAO PAULO")
      Escreval ("-----------------------")
      Escreval ("Quantos gols o Corinthians marcou?")
      Leia (N1)
      Escreval ("Quantos gols o Sao Paulo marcou?")
      Leia (N2)
      Se (N1 - N2 >= 4) ou (N2 - N1 >= 4) entao
         Escreval ("STATUS: GOLEADA")
      Senao
           Se (N1 = N2) entao
                   Escreval ("STATUS: EMPATE")
           Senao
                Se (N1 - N2 < 4) ou (N2 - N1 <4) entao
                   Escreval ("STATUS: JOGO NORMAL")
                Senao
                FimSe
           FimSe
      FimSe
fimalgoritmo