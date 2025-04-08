#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    string def;

    cout << "Digite um número: " << endl;
    cin >> n;

    if (n>=0){
        def = "positivo";
    }
    else{
        def = "negativo";
    }

    cout << "O número " << n << " é " << def << ".";

    return 0;
}
