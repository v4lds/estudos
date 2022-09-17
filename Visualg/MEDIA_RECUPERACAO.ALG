algoritmo "Media2Notas"
var
   N1, N2, MEDIA: Real
inicio
   Escreval ("------------------------")
   Escreval ("CÁLCULO DE MÉDIA ESCOLAR")
   Escreval ("------------------------")
   Escreval ("Primeira Nota: ")
   Leia (N1)
   Escreval ("Segunda Nota: ")
   Leia (N2)
   MEDIA <- ((N1 + N2) / 2)
   Escreval ("------------------------")
   Escreval ("MÉDIA: ",MEDIA:2:1)

   Se (MEDIA >= 7) entao
      Escreval ("STATUS: APROVADO.")
   Senao
      Se (MEDIA < 7) e (MEDIA >=5) entao
         Escreval ("STATUS: RECUPERAÇÃO.")
      Senao
         Escreval ("STATUS: REPROVADO.")
      FimSe
   FimSe
   Escreval ("------------------------")
fimalgoritmo