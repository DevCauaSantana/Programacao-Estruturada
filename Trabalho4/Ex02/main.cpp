#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char resposta;
    float n1, n2, calculo;

    while(resposta != 'S'){

    cout << "Escolha uma opção para calcular: \n";
    cout << "Digite - + - para escolher a SOMA." << endl;
    cout << "Digite - - - para escolher a SUBTRAÇÃO." << endl;
    cout << "Digite - / - para escolher a DIVISÃO." << endl;
    cout << "Digite - * - para escolher a MULTIPLICAÇÃO." << endl;
    cout << "Digite - S - para SAIR." << endl;
    cin >> resposta;

    resposta = toupper(resposta);

    if (resposta == 'S' ){
        break;
    }

        switch (resposta){
        case '+':
        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
            calculo = n1 + n2;
            cout << "O resultado da soma é: " << calculo << endl;
        break;
        case '-':
            cout << "Digite o primeiro número: ";
            cin >> n1;
            cout << "Digite o segundo número: ";
            cin >> n2;
            calculo = n1 - n2;
            cout << "O resultado da subtração é: " << calculo << endl;
        break;
        case '/':
                cout << "Digite o primeiro número: ";
            cin >> n1;
            cout << "Digite o segundo número: ";
            cin >> n2;
            calculo = n1 / n2;
            cout << "O resultado da divisão é: " << calculo << endl;
        break;
        case '*':
            cout << "Digite o primeiro número: ";
            cin >> n1;
            cout << "Digite o segundo número: ";
            cin >> n2;
            calculo = n1 * n2;
            cout << "O resultado da multiplicação é: " << calculo << endl;
        break;
        default:
            cout << "Opção inválida" << endl;
    }
    }


    return 0;
}
