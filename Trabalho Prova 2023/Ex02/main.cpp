#include <iostream>
using namespace std;

int main() {
    float numeros[15], soma = 0, media;
    int iguaisA4 = 0, maioresQueMedia = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Digite o " << i+1 << "� valor do vetor: ";
        cin >> numeros[i];
        soma += numeros[i];
        if (numeros[i] == 4) iguaisA4++;
    }

    media = soma / 15;

    for (int i = 0; i < 15; i++) {
        if (numeros[i] > media) maioresQueMedia++;
    }

    cout << "\nA m�dia de todos os valores digitados foi: " << media << endl;
    cout << "No vetor existem: " << iguaisA4 << "n�meros iguais a 4 e " << maioresQueMedia << " n�meros maiores que a m�dia.";

    return 0;
}
