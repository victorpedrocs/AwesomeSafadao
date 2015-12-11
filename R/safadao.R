#
# Awesome Safadão
# vpcsilva/AwesomeSafadao
# author: @ronaldosvieira
#

somatorio <- function(mes) {
  soma = 0
  for (i in 1:mes) {
    soma <- soma + i
  }
  
  soma
}

wesley_safadao <- function(dia, mes, ano) {
  safadeza <- somatorio(mes) + (ano / 100) * (50 - dia)
  print(safadeza)
  anjo <- 100 - safadeza
  
  print(paste("Você é ", safadeza, "% safado(a) e ", anjo, "% anjo!", sep=""))
}

print("Insira sua data de nascimento\n")

dia <- as.integer(readline("Dia (0-31):"))
mes <- as.integer(readline("Mês (0-12):"))
ano <- as.integer(readline("Ano (00-99):"))

wesley_safadao(dia, mes, ano)
