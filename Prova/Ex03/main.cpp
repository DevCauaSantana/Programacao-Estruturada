#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int mes;

    cout << "Digite seu nome:" << endl;
    cin >> nome;

    cout << "Digite o número do mês do seu aniversário:" << endl;
    cin >> mes;

    switch(mes){
    case 1:
        cout << "Oi " << nome << ", você nasceu em Janeiro.";
        break;
    case 2:
        cout << "Oi " << nome << ", você nasceu em Fevereiro.";
        break;
    case 3:
        cout << "Oi " << nome << ", você nasceu em Março.";
        break;
    case 4:
        cout << "Oi " << nome << ", você nasceu em Abril.";
        break;
    case 5:
        cout << "Oi " << nome << ", você nasceu em Maio.";
        break;
    case 6:
        cout << "Oi " << nome << ", você nasceu em Junho.";
        break;
    case 7:
        cout << "Oi " << nome << ", você nasceu em Julho.";
        break;
    case 8:
        cout << "Oi " << nome << ", você nasceu em Agosto.";
        break;
    case 9:
        cout << "Oi " << nome << ", você nasceu em Setembro.";
        break;
    case 10:
        cout << "Oi " << nome << ", você nasceu em Outubro.";
        break;
    case 11:
        cout << "Oi " << nome << ", você nasceu em Novembro.";
        break;
    case 12:
        cout << "Oi " << nome << ", você nasceu em Dezembro.";
        break;
    default:
        cout << "Opção Inválida!";
        break;

    }


    return 0;
}
