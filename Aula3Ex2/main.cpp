#include <iostream>

using namespace std;

int main()
{
    bool num1, num2;
    cout << "Operadores Lógicos" << endl;
    cout << "Digite 2 números: " << endl;
    cin >> num1 >> num2;
    cout << "A negação do primeiro num é: " << !num1 << endl;
    cout << "A op. AND entre o primeiro e segundo num é: " << (num1 && num2) << endl;
    cout << "A op. OR entre o primeiro e segundo num é: " << (num1 || num2) << endl;



    return 0;
}
