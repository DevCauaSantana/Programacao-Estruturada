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

    cout << "Digite o n�mero do m�s do seu anivers�rio:" << endl;
    cin >> mes;

    switch(mes){
    case 1:
        cout << "Oi " << nome << ", voc� nasceu em Janeiro.";
        break;
    case 2:
        cout << "Oi " << nome << ", voc� nasceu em Fevereiro.";
        break;
    case 3:
        cout << "Oi " << nome << ", voc� nasceu em Mar�o.";
        break;
    case 4:
        cout << "Oi " << nome << ", voc� nasceu em Abril.";
        break;
    case 5:
        cout << "Oi " << nome << ", voc� nasceu em Maio.";
        break;
    case 6:
        cout << "Oi " << nome << ", voc� nasceu em Junho.";
        break;
    case 7:
        cout << "Oi " << nome << ", voc� nasceu em Julho.";
        break;
    case 8:
        cout << "Oi " << nome << ", voc� nasceu em Agosto.";
        break;
    case 9:
        cout << "Oi " << nome << ", voc� nasceu em Setembro.";
        break;
    case 10:
        cout << "Oi " << nome << ", voc� nasceu em Outubro.";
        break;
    case 11:
        cout << "Oi " << nome << ", voc� nasceu em Novembro.";
        break;
    case 12:
        cout << "Oi " << nome << ", voc� nasceu em Dezembro.";
        break;
    default:
        cout << "Op��o Inv�lida!";
        break;

    }


    return 0;
}
