#include <iostream>
#include <locale>

using namespace std;

    int maiorNum (int a, int b, int c){
        int maior;

        maior = a;

        if (b > maior){
            maior = b;
        }

        if (c > maior){
            maior = c;
        }
        return maior;
    }

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int primeiro, segundo, terceiro, x, y, z, maior_1, maior_2;

    cout << "Digite o primeiro conjunto de tr�s n�meros inteiros: ";
    cin >> primeiro >> segundo >> terceiro;

    maior_1 = maiorNum(primeiro, segundo, terceiro);

    cout << "Digite o segundo conjunto de tr�s n�meros inteiros: ";
    cin >> x >> y >> z;

    maior_2 = maiorNum(x, y, z);

    cout << endl << maior_1 << " + " << maior_2 << " = " << maior_1 + maior_2 << endl;

    return 0;
}
