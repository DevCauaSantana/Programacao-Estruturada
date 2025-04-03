#include <iostream>
using namespace std;

int main()
{
    float n1, n2;

    int calculo;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    cout << "Escolha uma opção para calcular: \n";
    cout << "Digite - 1 - para escolher a SOMA." << endl;
    cout << "Digite - 2 - para escolher a SUBTRAÇÃO." << endl;
    cout << "Digite - 3 - para escolher a DIVISÃO." << endl;
    cout << "Digite - 4 - para escolher a MULTIPLICAÇÃO." << endl;
    cout << "Digite - 5 - para SAIR." << endl;

    cin >> calculo;

    switch (calculo){
        case 1:
            calculo = n1 + n2;
            cout << "O resultado da soma é: " << calculo << endl;
        break;
        case 2:
            calculo = n1 - n2;
            cout << "O resultado da subtração é: " << calculo << endl;
        break;
        case 3:
            calculo = n1 / n2;
            cout << "O resultado da divisão é: " << calculo << endl;
        break;
        case 4:
            calculo = n1 * n2;
            cout << "O resultado da multiplicação é: " << calculo << endl;
        break;
        case 5:
            break;
        default:
            cout << "Opção inválida";
    }
    return 0;

}
