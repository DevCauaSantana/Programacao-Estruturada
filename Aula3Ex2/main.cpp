#include <iostream>

using namespace std;

int main()
{
    bool num1, num2;
    cout << "Operadores L�gicos" << endl;
    cout << "Digite 2 n�meros: " << endl;
    cin >> num1 >> num2;
    cout << "A nega��o do primeiro num �: " << !num1 << endl;
    cout << "A op. AND entre o primeiro e segundo num �: " << (num1 && num2) << endl;
    cout << "A op. OR entre o primeiro e segundo num �: " << (num1 || num2) << endl;



    return 0;
}
