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

    cout << "Digite o primeiro n�mero: " << endl;
    cin >> a;
    cout << "Digite o segundo n�mero: " << endl;
    cin >> b;

    cout << "O resultado da divis�o �: " << funcaoDivide(a, b) << endl;
    return 0;
}
