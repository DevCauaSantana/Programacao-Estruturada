#include <iostream>
using namespace std;

int main()
{
    float n1, n2;

    int calculo;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;

    cout << "Escolha uma op��o para calcular: \n";
    cout << "Digite - 1 - para escolher a SOMA." << endl;
    cout << "Digite - 2 - para escolher a SUBTRA��O." << endl;
    cout << "Digite - 3 - para escolher a DIVIS�O." << endl;
    cout << "Digite - 4 - para escolher a MULTIPLICA��O." << endl;
    cout << "Digite - 5 - para SAIR." << endl;

    cin >> calculo;

    switch (calculo){
        case 1:
            calculo = n1 + n2;
            cout << "O resultado da soma �: " << calculo << endl;
        break;
        case 2:
            calculo = n1 - n2;
            cout << "O resultado da subtra��o �: " << calculo << endl;
        break;
        case 3:
            calculo = n1 / n2;
            cout << "O resultado da divis�o �: " << calculo << endl;
        break;
        case 4:
            calculo = n1 * n2;
            cout << "O resultado da multiplica��o �: " << calculo << endl;
        break;
        case 5:
            break;
        default:
            cout << "Op��o inv�lida";
    }
    return 0;

}
