#include <iostream>
#include <locale.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");
    float numeros[10], soma = 0;
    int i;

    for (i = 0; i<10; i++){
        cout << "Digite o " << (i+1) << "� valor: " << endl;
        cin >> numeros[i];
        soma+= numeros[i];
    }
    cout << "Os valores digitados s�o: ";

    for (i = 0; i<10; i++){
        cout << numeros[i] << " - ";
    }

    cout << "\n\nA soma dos valores digitados �: " << soma << endl;
    return 0;
}
