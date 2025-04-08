#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio, pi = 3.14, area, perimetro;

    cout << "Informe o raio do círculo: " << endl;
    cin >> raio;

    perimetro = 2*pi*raio;
    area = pi*(raio*raio);

    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area;

    return 0;
}
