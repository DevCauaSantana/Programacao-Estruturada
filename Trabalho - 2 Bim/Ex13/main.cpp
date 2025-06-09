#include <iostream>
#include <fstream>
#include <cstring>

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

    ofstream arquivo("arquivoIMC.txt");
    if (!arquivo) {
        cout << "Erro ao criar o arquivo!" << endl;
        return 1;
    }

    arquivo << "Programa para calcular o IMC de uma pessoa\n\n";
    arquivo << "Quantos IMCs você vai calcular? " << qtd << endl;

    for (int i = 0; i < qtd; i++) {
        arquivo << "O IMC do cliente " << strPessoa[i].nome << " é: " << calcularIMC(strPessoa[i].peso, strPessoa[i].altura) << endl << endl;

    }

    arquivo.close();


    return 0;
}
