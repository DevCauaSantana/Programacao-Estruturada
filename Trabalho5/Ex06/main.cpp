#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Digite um número: " << endl;
    cin >> n;

    if (n>0){
        cout << "O número " << n << " é " << "positivo.";
    }
    else if (n<0){
        cout << "O número " << n << " é " << "negativo.";
    }
    else{
        cout << "zero";
    }

    return 0;
}
