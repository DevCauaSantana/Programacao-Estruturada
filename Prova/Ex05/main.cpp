#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;

    cout << "Informe um número inteiro positivo para iniciar a música: ";
    cin >> n;

    for (n; n > 0; n--){
        cout << endl << endl << n << " patinhos foram passear." << endl;
        cout << "Além das montanhas para brincar." << endl;
        cout << "A mamãe gritou: Quá, quá, quá, quá." << endl;
        cout << "Mas só " << ( n - 1 ) << " patinhos voltaram de lá." << endl;
    }

    cout << "**************************************************" << endl << endl;

    return 0;
}
