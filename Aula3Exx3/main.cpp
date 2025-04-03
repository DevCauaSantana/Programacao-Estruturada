#include <iostream>
#include <locale>;

//Escreva um programa que recebe dois números e retorna o maior deles.

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior;

    cout << "Digite o número 1: \n";
    cin >> n1;
    cout << "Digite o número 2: \n";
    cin >> n2;

    if(n1 > n2){
        maior = n1;
    }
    else{
        maior = n2;
    }

    cout << "O maior número é: " << maior << endl;
    return 0;
}
