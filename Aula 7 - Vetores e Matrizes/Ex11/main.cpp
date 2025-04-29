#include <iostream>

using namespace std;

int main()
{
    int i, j, linhas, colunas;

    cout << "Digite o tamanho das matrizes (linhas - colunas): " << endl;
    cin >> linhas >> colunas;

    int matriz1 [linhas][colunas], matriz2 [linhas][colunas];


    //Preenchimento de matriz 1
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            cout << "Digite o valor [" << i+1 << ", " << j+1 << "] " << "da primeira matriz: " << endl;
            cin >> matriz1[i][j];
        }
    }

    //Preenchimento de matriz 2
        for(i=0; i<linhas; i++){
            for(j=0; j<colunas; j++){
                cout << "Digite o valor [" << i+1 << ", " << j+1 << "] " << "da segunda matriz: " << endl;
                cin >> matriz2[i][j];
        }
    }

    int matriz_resultado [linhas][colunas];

    //Preenchimento de matriz SOMA

            for(i=0; i<linhas; i++){
                for(j=0; j<colunas; j++){
                    matriz_resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //Mostrando os valores na tela
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
               cout << matriz_resultado[i][j] << "\t";
            }

            cout << endl;
        }

    return 0;
}
