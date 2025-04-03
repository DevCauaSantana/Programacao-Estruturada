#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float l, area, dobro;

    cout << "Digite o valor do lado do quadrado: \n";
    cin >> l;

    area = pow(l,2);

    dobro = area * 2;

    cout << "O dobro da área é: " << dobro << endl;
    return 0;
}
