#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    string def;

    cout << "Digite um n�mero: " << endl;
    cin >> n;

    if (n>=0){
        def = "positivo";
    }
    else{
        def = "negativo";
    }

    cout << "O n�mero " << n << " � " << def << ".";

    return 0;
}
