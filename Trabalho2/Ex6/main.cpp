#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float raio, pi = 3.14159265359, area;

    cout << "Digite o valor do raio: \n";
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << "A �rea do c�rculo �: " << area << endl;
    return 0;
}
