#
# author: @vpcsilva
#

def somatorio(mes):
    return sum( range( 1, mes + 1 ) )

def wesley_safadao(dia, mes, ano):
    safadeza = somatorio(mes) + (ano/100) * (50-dia)
    anjo = 100.0 - safadeza

    print anjo, "%% ANJO, mas o", safadeza, "%% eh VAGABUNDO"

print "Insira sua data de nascimento:"
dia = int(raw_input("Dia (dd): "))
mes = int(raw_input("Mes (mm): "))
ano = float(raw_input("Ano (AA): "))
wesley_safadao(dia, mes, ano)
