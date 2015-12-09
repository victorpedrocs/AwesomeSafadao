var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function somatorio(mes) {
    var i, sum = 0;

    for (i = 1; i <= mes; i++) {
        sum += i;
    }

    return sum;
}

function wesley_safadao(dia, mes, ano) {
    var safadeza = somatorio(mes) + (ano/100) * (50-dia);
    var anjo = 100.0 - safadeza;

    console.log(anjo, '% ANJO, mas o ', safadeza, '% eh VAGABUNDO!');
}

var dia = 0, mes = 0, ano = 0;

console.log("Insira sua data de nascimento:");
rl.question("Dia (dd) :", function(answer) {
    dia = parseInt(answer);

    rl.question("Mes (mm) :", function(answer) {
        mes = parseInt(answer);

        rl.question("Ano (AA) :", function(answer) {
            ano = parseInt(answer);

            wesley_safadao(dia, mes, ano);

            process.exit(0);
        });
    });
});
