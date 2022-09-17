algoritmo "MelhorAlunodaClasse"
var
   TA, Nota, C, Maior: Inteiro
   Nome, MaiorNome: Caractere
inicio
      EscrevaL ("----------------")
      EscrevaL ("Escola Municipal")
      EscrevaL ("----------------")
      Escreva ("Quantos alunos a turma tem? ")
      Leia (TA)
      EscrevaL ("--------------")
      C <- 1
      Enquanto (C <= TA) faca
         EscrevaL ("Aluno ",C)
         Escreva ("Nome do aluno: ")
         Leia (Nome)
         Escreva ("Nota do aluno: ")
         Leia (Nota)
         Se (Nota > maior) entao
            maior <- Nota
            MaiorNome <- Nome
         FimSe
         EscrevaL ("--------------")
         C <- C + 1
      FimEnquanto
      EscrevaL ("O aluno com maior aproveitamento foi ",MaiorNome," com a nota ",maior)
fimalgoritmo