#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Digite um n�mero: " << endl;
    cin >> n;

    if (n>0){
        cout << "O n�mero " << n << " � " << "positivo.";
    }
    else if (n<0){
        cout << "O n�mero " << n << " � " << "negativo.";
    }
    else{
        cout << "zero";
    }

    return 0;
}
