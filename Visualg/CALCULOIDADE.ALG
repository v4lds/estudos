algoritmo "CalculoIdade"
var
   ano_atual, ano_nasc, Idade: Inteiro
inicio
      Escreval ("Em que ano estamos? ")
      Leia (ano_atual)
      Escreval ("Em que ano voc? nasceu? ")
      Leia (ano_nasc)
      Se (ano_atual < ano_nasc) entao
         Escreval ("As datas s?o inv?lidas.")
      Senao (ano_atual > ano_nasc) entao
         Idade <- (ano_atual - ano_nasc)
         Escreval ("Voc? tem ", Idade ," anos.")
      FimSe
fimalgoritmo