#include <iostream>
using namespace std;

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    int qtd;

    cout << "Programa para calcular o IMC de uma pessoa\n\n";

    cout << "Quantos IMCs você vai calcular? ";
    cin >> qtd;

    struct PessoaIMC {
    string nome;
    float peso;
    float altura;
}strPessoa[qtd];

    for (int i = 0; i < qtd; i++) {
        cin.ignore(); // limpar o buffer
        cout << "INFORME O NOME DO CLIENTE: ";
        getline(cin, strPessoa[i].nome);

        cout << "INFORME O PESO DO CLIENTE: ";
        cin >> strPessoa[i].peso;

        cout << "INFORME A ALTURA DO CLIENTE: ";
        cin >> strPessoa[i].altura;

        float imc = calcularIMC(strPessoa[i].peso, strPessoa[i].altura);
        cout << "O IMC é: " << imc << endl << endl;
    }

    return 0;
}
