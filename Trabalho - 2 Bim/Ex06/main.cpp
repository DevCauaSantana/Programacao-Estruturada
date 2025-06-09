#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4];
    int i, j;
    //Preenchimento de matriz
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz:" << endl;
            cin >> matriz[i][j];
        }
    }
    cout << "Os valores do matriz são:\n";
    //Mostrando os valores na tela
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
