algoritmo "Media2Notas"
var
   N1, N2, MEDIA: Real
inicio
      Escreval ("------------------------")
      Escreval ("C?LCULO DE M?DIA ESCOLAR")
      Escreval ("------------------------")
      Escreval ("Primeira Nota: ")
      Leia (N1)
      Escreval ("Segunda Nota: ")
      Leia (N2)
      MEDIA <- ((N1 + N2) / 2)
      Escreval ("------------------------")
      Escreval ("M?DIA: ",MEDIA:2:1)

      Se (MEDIA >= 7) entao
         Escreval ("STATUS: APROVADO.")
      Senao
         Escreval ("STATUS: REPROVADO.")
      FimSe
      Escreval ("------------------------")
fimalgoritmo