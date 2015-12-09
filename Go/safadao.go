package main

import "fmt"

func somatorio(mes int) int {
	soma := 0
	for i := mes; i > 0; i-- {
		soma += i
	}
	return soma
}
func wesley_safadao(dia, mes, ano int) {
	safadeza := float32(somatorio(mes)) + (float32(ano) / 100.0) * (50.0 - float32(dia))
	anjo := 100.0 - safadeza
	
	fmt.Printf("%.1f %% ANJO, mas o %.1f %% é VAGABUNDO!\n", anjo, safadeza)
}
func main() {
	var dia, mes, ano int
	
	fmt.Println("Insira sua data de nascimento: ");
	fmt.Print("Dia (dd): ");

	fmt.Scanf("%d", &dia);
	fmt.Print("Mes (mm): ");

	fmt.Scanf("%d", &mes);
	fmt.Print("Ano (AA): ");
	
	fmt.Scanf("%d", &ano);
	
	wesley_safadao(dia, mes, ano)
}


