#include <iostream>
#include <locale.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");
    int numeros[8], qtd_multiplo = 0;
    int i;

    for (i = 0; i<8; i++){
        cout << "Digite o " << (i+1) << "� valor: ";
        cin >> numeros[i];

        if(numeros[i]%3==0){
            qtd_multiplo++;
        }
    }
    cout << "Os valores digitados s�o: ";

    for (i = 0; i<8; i++){
        cout << numeros[i] << " - ";
    }

    cout << "\n\nForam digitados " << qtd_multiplo << " n�meros m�ltiplos de 3." << endl;
    return 0;
}
