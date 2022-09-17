algoritmo "AumentoFuncionario"
var
   Nome: Caractere
   Sal, NSal: Real
   Dep: Inteiro
inicio
      Escreval ("Qual o nome do Funcionário?")
      Leia (Nome)
      Escreval ("Qual o salário do Funcionário?")
      Leia (Sal)
      Escreval ("Qual a quantidade de dependentes?")
      Leia (Dep)
      Escolha Dep
              Caso 0
                   NSal <- Sal + (Sal*5/100)
              Caso 1, 2, 3
                   NSal <- Sal + (Sal*10/100)
              Caso 4, 5, 6
                   NSal <- Sal + (Sal*15/100)
              OutroCaso
                   NSal <- Sal + (Sal*18/100)
      FimEscolha
      Escreval ("O novo salário de ",Nome," será de R$ ", NSal:5:2)
fimalgoritmo