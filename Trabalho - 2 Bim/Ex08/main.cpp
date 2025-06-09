#include <iostream>

using namespace std;

int main()
{
    int matriz1[4][5];
    int i, j;

    //Preenchimento de matriz 1
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz: " << endl;
            cin >> matriz1[i][j];
        }
    }

    float matriz_resultado[4][5];

    //Preenchimento de matriz DIVISAO

            for(i=0; i<4; i++){
                for(j=0; j<5; j++){
                    matriz_resultado[i][j] = (float)matriz1[i][j] / 2;
        }
    }

    cout << "Os valores do matriz são:\n";

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
               cout << matriz1[i][j] << "\t";
            }

            cout << endl;
        }

    cout << "A matriz com os valores resultantes:\n";

    //Mostrando os valores na tela
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
               cout << matriz_resultado[i][j] << "\t";
            }

            cout << endl;
        }

    return 0;
}
