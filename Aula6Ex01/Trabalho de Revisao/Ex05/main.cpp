#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n, maior = 0, menor;
    int i;

    for(i=0; i<50; i++){
        cout << "Digite um valor: " << endl;
        cin >> n;

        if (i == 0){
            maior = n;
            menor = maior;
        }
        else if (n > maior){
            maior = n;
        }

        else if (n < menor){
            menor = n;
        }
    }

    cout << "O maior n�mero �: "  << maior << endl;
    cout << "O menor n�mero �: "  << menor << endl;
    return 0;
}
