#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n;
    cout << "Digite o valor de N (tamanho da matriz NxN): ";
    cin >> n;

    int matriz[n][n];

    // Leitura da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Digite um valor para a posi��o " << i << ", " << j << " da matriz: " << endl;
            cin >> matriz[i][j];
        }
    }

    // Impress�o da matriz completa
    cout << "Os vlores do matriz s�o:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Impress�o sem primeira linha e coluna
    cout << "Os valores do matriz sem a primeira linha e primeira coluna s�o:" << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
