algoritmo "CalculoIMC"
var
   MC, A, IMC: Real
inicio
      Escreval ("Informe sua massa corporal (Kg): ")
      Leia (MC)
      Escreval ("Informe sua altura (m): ")
      Leia (A)
      IMC <- (MC / A^2)
      Escreval ("O valor do IMC ?: ",IMC:5:2)
      Se (IMC >= 18.5) e (IMC < 25) entao
         Escreval ("Voc? est? no peso ideal.")
      Senao
           Escreval ("Voc? n?o est? no peso ideal.")
      FimSe
fimalgoritmo