#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> n;


    cout << "\nTabuada do " << n << endl;
    cout << "******************";
    for (i=1; i<=10; i++){
        cout << "\n" << i << " X " << n << " = " << (i*n);
    }

    cout << "\n******************";


    return 0;

}
