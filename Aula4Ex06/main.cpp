#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char bolo;

    cout << "Escolha uma op��o do card�pio para ver o valor: \n";
    cout << "Digite - C - escolher bolo de Chocolate." << endl;
    cout << "Digite - B - escolher bolo de Banana." << endl;
    cout << "Digite - A - escolher bolo de Amendoim." << endl;
    cout << "Digite - L - escolher bolo de Lim�o." << endl;
    cout << "Digite - F - escolher bolo de Fub�." << endl;

    cin >> bolo;
    bolo = toupper (bolo);

    switch (bolo){
        case 'C':
            cout << "O bolo de Chocolate custa R$ 14.00." << endl;
        break;
        case 'B':
            cout << "O bolo de Banana custa R$ 17.00." << endl;
        break;
        case 'A':
            cout << "O bolo de Amendoim custa R$ 13.00." << endl;
        break;
        case 'L':
            cout << "O bolo de Lim�o custa R$ 14.00." << endl;
        break;
        case 'F':
            cout << "O bolo de Fub� custa R$ 12.00." << endl;
        break;
        default:
            cout << "Op��o inv�lida";
    }
    return 0;

}
