#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;

    cout << "Informe um n�mero inteiro positivo para iniciar a m�sica: ";
    cin >> n;

    for (n; n > 0; n--){
        cout << endl << endl << n << " patinhos foram passear." << endl;
        cout << "Al�m das montanhas para brincar." << endl;
        cout << "A mam�e gritou: Qu�, qu�, qu�, qu�." << endl;
        cout << "Mas s� " << ( n - 1 ) << " patinhos voltaram de l�." << endl;
    }

    cout << "**************************************************" << endl << endl;

    return 0;
}
