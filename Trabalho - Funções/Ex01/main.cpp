#include <iostream>

using namespace std;

float funcaoDivide(float x, float y){
    float resultado;

    resultado = x/y;

    return resultado;
}

int main()
{
    float a, b;

    cout << "Digite o primeiro número: " << endl;
    cin >> a;
    cout << "Digite o segundo número: " << endl;
    cin >> b;

    cout << "O resultado da divisão é: " << funcaoDivide(a, b) << endl;
    return 0;
}
