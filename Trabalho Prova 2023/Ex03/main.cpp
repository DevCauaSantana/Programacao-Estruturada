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
            cout << "Digite um valor para a posição " << i << ", " << j << " da matriz: " << endl;
            cin >> matriz[i][j];
        }
    }

    // Impressão da matriz completa
    cout << "Os vlores do matriz são:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Impressão sem primeira linha e coluna
    cout << "Os valores do matriz sem a primeira linha e primeira coluna são:" << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
