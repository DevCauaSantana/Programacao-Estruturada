#include <iostream>

using namespace std;

    float calcularIMC(float peso, float altura) {
        return peso / (altura * altura);
    }

int main() {

    cout << "Programa para calcular o IMC de uma pessoa\n\n ";

    float peso, altura;

    cout << "Digite o peso: \n";
    cin >> peso;

    cout << "Digite a altura: \n";
    cin >> altura;

    float imc = calcularIMC(peso, altura);

    cout << "O IMC é: " << imc << endl;

    return 0;
}
