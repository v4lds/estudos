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
   Se (IMC < 17) entao
      Escreval ("STATUS: MUITO ABAIXO DO PESO.")
   Senao
      Se (IMC >= 17) e (IMC < 18.5) entao
         Escreval ("STATUS: ABAIXO DO PESO.")
      Senao
         Se (IMC >=18.5) e (IMC < 25) entao
            Escreval ("STATUS: PESO IDEAL.")
         Senao
            Se (IMC >= 25) e (IMC < 30) entao
               Escreval ("STATUS: ACIMA DO PESO.")
            Senao
               Se (IMC >= 30) e (IMC < 35) entao
                  Escreval ("STATUS: OBESIDADE.")
               Senao
                  Se (IMC >= 35) e (IMC < 40) entao
                     Escreval ("STATUS: OBESIDADE SEVERA.")
                  Senao
                     Escreval ("STATUS: OBESIDADE MÓRBIDA.")
                  FimSe
               FimSe
            FimSe
         FimSe
      FimSe
   FimSe
fimalgoritmo