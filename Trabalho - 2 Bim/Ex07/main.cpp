#include <iostream>

using namespace std;

int main()
{
    int matriz[6][6];
    int i, j;
    //Preenchimento de matriz
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz:" << endl;
            cin >> matriz[i][j];
        }
    }
    //Mostrando os valores na tela
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }


cout << "\nOs valores da diagonal secundária são:\n";
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(j == 5 - i)
                cout << matriz[i][j] << "\t";
            else
                cout << " \t";
        }
        cout << endl;
    }

    return 0;
}
