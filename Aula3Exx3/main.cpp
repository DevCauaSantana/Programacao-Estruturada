#include <iostream>
#include <locale>;

//Escreva um programa que recebe dois n�meros e retorna o maior deles.

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior;

    cout << "Digite o n�mero 1: \n";
    cin >> n1;
    cout << "Digite o n�mero 2: \n";
    cin >> n2;

    if(n1 > n2){
        maior = n1;
    }
    else{
        maior = n2;
    }

    cout << "O maior n�mero �: " << maior << endl;
    return 0;
}
