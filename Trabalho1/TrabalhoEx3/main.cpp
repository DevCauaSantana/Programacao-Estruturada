#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float fah, celsius;

    cout << "Digite o valor de graus em Fahrenheit:  " << endl;
    cin >> fah;

    celsius = (fah - 32) * 5/9;

    cout << "O valor em graus Celsius é: " << celsius;

    return 0;
}
