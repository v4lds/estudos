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
         Escreval ("STATUS: REPROVADO.")
      FimSe
      Se (MEDIA = 10) ou (MEDIA >= 9.0) entao
         Escreval ("APROVEITAMENTO: A")
      Senao
           Se (MEDIA = 8.9) ou (MEDIA >= 8.0) entao
              Escreval ("APROVEITAMENTO: B")
           Senao
                Se (MEDIA = 7.9) ou (MEDIA >= 7.0) entao
                   Escreval ("APROVEITAMENTO: C")
                Senao
                     Se (MEDIA = 6.9) ou (MEDIA >= 6.0) entao
                        Escreval ("APROVEITAMENTO: D")
                     Senao
                          Se (MEDIA = 5.9) ou (MEDIA >= 5.0) entao
                             Escreval ("APROVEITAMENTO: E")
                          Senao
                             Escreval ("APROVEITAMENTO: F")
                          FimSe
                     FimSe
                FimSe
           FimSe
      FimSe
      Escreval ("------------------------")
fimalgoritmo