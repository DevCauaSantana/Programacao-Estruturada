#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char resposta;
    float n1, n2, calculo;

    while(resposta != 'S'){

    cout << "Escolha uma op��o para calcular: \n";
    cout << "Digite - + - para escolher a SOMA." << endl;
    cout << "Digite - - - para escolher a SUBTRA��O." << endl;
    cout << "Digite - / - para escolher a DIVIS�O." << endl;
    cout << "Digite - * - para escolher a MULTIPLICA��O." << endl;
    cout << "Digite - S - para SAIR." << endl;
    cin >> resposta;

    resposta = toupper(resposta);

    if (resposta == 'S' ){
        break;
    }

        switch (resposta){
        case '+':
        cout << "Digite o primeiro n�mero: ";
        cin >> n1;
        cout << "Digite o segundo n�mero: ";
        cin >> n2;
            calculo = n1 + n2;
            cout << "O resultado da soma �: " << calculo << endl;
        break;
        case '-':
            cout << "Digite o primeiro n�mero: ";
            cin >> n1;
            cout << "Digite o segundo n�mero: ";
            cin >> n2;
            calculo = n1 - n2;
            cout << "O resultado da subtra��o �: " << calculo << endl;
        break;
        case '/':
                cout << "Digite o primeiro n�mero: ";
            cin >> n1;
            cout << "Digite o segundo n�mero: ";
            cin >> n2;
            calculo = n1 / n2;
            cout << "O resultado da divis�o �: " << calculo << endl;
        break;
        case '*':
            cout << "Digite o primeiro n�mero: ";
            cin >> n1;
            cout << "Digite o segundo n�mero: ";
            cin >> n2;
            calculo = n1 * n2;
            cout << "O resultado da multiplica��o �: " << calculo << endl;
        break;
        default:
            cout << "Op��o inv�lida" << endl;
    }
    }


    return 0;
}
