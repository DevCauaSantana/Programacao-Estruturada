#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> n;

    if (n >= 1 && n <= 9){

    cout << "\nTabuada do " << n << endl;
    cout << "******************";
    for (i=1; i<=10; i++){
        cout << "\n" << i << " X " << n << " = " << (i*n);
    }

    cout << "\n******************";

    }
    else{
        cout << "Número Inválido";
    }

    return 0;

}
