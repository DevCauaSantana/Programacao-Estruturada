#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float metros, preco, qtd_litro;
    int qtd_lata;

    cout << "Informe o tamanho em metros quadrados da �rea a ser pintada: " << endl;
    cin >> metros;

    qtd_litro = metros / 3;

    qtd_lata = ceil(qtd_litro / 18.0);

    preco = qtd_lata * 80;

    cout << "Ser�o compradas " << qtd_lata << " latas de tinta e o pre�o ser� de: " << preco << " reais.";
    return 0;
}
