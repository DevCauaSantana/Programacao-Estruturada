//Escreva um programa para determinar o maior de tr�s n�meros dados.

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, maior;

    cout << "Digite o n�mero 1: \n";
    cin >> n1;
    cout << "Digite o n�mero 2: \n";
    cin >> n2;
    cout << "Digite o n�mero 3: \n";
    cin >> n3;

    if(n1 > n2 && n1 > n3){
        maior = n1;
    }
    else{
        if(n2 > n1 && n2 > n3){
            maior = n2;
        }
        else{
            if(n3 > n1 && n3 > n2){
                maior = n3;
                }
            }
        }

    cout << "O maior n�mero �: " << maior << endl;
    return 0;
}
