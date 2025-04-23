#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int ano, opc;

    cout << "Digite seu nome:" << endl;
    cin >> nome;

    cout << "Digite o ano que você começou seu curso:" << endl;
    cin >> ano;

    cout << "Digite o número do curso que você está matriculado:" << endl;
    cout << "(  1  ) - Física;" << endl;
    cout << "(  2  ) - BSI;" << endl;
    cout << "(  3  ) - Engenharia;" << endl;
    cin >> opc;

    switch(opc){
        case 1:
            cout << "Oi " << nome << ", você deve se formar em: " << (ano + 2) << "." << endl;
            break;
        case 2:
            cout << "Oi " << nome << ", você deve se formar em: " << (ano + 3) << "." << endl;
            break;
        case 3:
            cout << "Oi " << nome << ", você deve se formar em: " << (ano + 4) << "." << endl;
            break;
    }

    return 0;
}
