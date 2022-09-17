algoritmo "CriancaEsperanca"
var
   D: Inteiro
   Valor: Real
inicio
   Escreval ("--------------------------")
   Escreval ("    CRIANÇA ESPERANÇA     ")
   Escreval ("--------------------------")
   Escreval ("Muito obrigado por ajudar.")
   Escreval ("--------------------------")
   Escreval (" [1] Para doar R$10,00.")
   Escreval (" [2] Para doar R$30,00.")
   Escreval (" [3] Para doar R$50,00.")
   Escreval (" [4] Para doar outros valores.")
   Escreval (" [5] Para cancelar.")
   Leia (D)
   Escolha D
      Caso 1
         valor <- 10
      Caso 2
         valor <- 30
      Caso 3
         valor <- 50
      Caso 4
         Escreva ("Digite o valor da doação: R$")
         Leia (valor)
      Caso 5
         valor <- 0
   FimEscolha
   Escreval ("----------------------------------")
   Escreval ("Sua doação foi de R$ ",valor)
   Escreval ("Muito Obrigado!")
   Escreval ("----------------------------------")
fimalgoritmo