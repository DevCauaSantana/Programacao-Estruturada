#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float raio, pi = 3.14159265359, area;

    cout << "Digite o valor do raio: \n";
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << "A área do círculo é: " << area << endl;
    return 0;
}
