algoritmo "semnome"
var
   L1, L2, L3: Real
   ES, EQ, TRI: Logico
   
inicio
   Escreval ("Informe o primeiro lado: ")
   Leia (L1)
   Escreval ("Informe o segunddo lado: ")
   Leia (L2)
   Escreval ("Informe o terceiro lado: ")
   Leia (L3)
   TRI <- (L1 < L2 + L3) e (L2 < L1 + L3) e (L3 < L1 + L2)
   EQ <- (L1 = L2) e (L2 = L3)
   ES <- (L1 <> L2) e (L2 <> L3) e (L1 <> L3)
   Escreval ("Triângulo Equilatero: ", EQ)
   Escreval ("Triângulo Escaleno: ", ES)
   Escreva ("Formam um triângulo: ", TRI)
fimalgoritmo