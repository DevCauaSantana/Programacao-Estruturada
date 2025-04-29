#include <iostream>

using namespace std;

int main()
{
    int tamanho;

    cout << "Digite o tamanho da matriz quadrada: " << endl;
    cin >> tamanho;

    int matriz[tamanho][tamanho];
    int i, j;

    //Preenchimento de matriz
    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]:" << endl;
            cin >> matriz[i][j];
        }
    }
    //Mostrando os valores na tela
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            if(i!= j){
               cout << matriz[i][j] << "\t";
            }

        }
        cout << endl;
    }
    return 0;
}
