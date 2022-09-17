algoritmo "CalculoIMC"
var
   MC, A, IMC: Real
inicio
      Escreval ("Informe sua massa corporal (Kg): ")
      Leia (MC)
      Escreval ("Informe sua altura (m): ")
      Leia (A)
      IMC <- (MC / A^2)
      Escreval ("O valor do IMC é: ",IMC:5:2)
      Se (IMC >= 18.5) e (IMC < 25) entao
         Escreval ("Você está no peso ideal.")
      Senao
           Escreval ("Você não está no peso ideal.")
      FimSe
fimalgoritmo