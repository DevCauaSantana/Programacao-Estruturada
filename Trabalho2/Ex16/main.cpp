#include <iostream>

using namespace std;

int main()
{
    float n1, n2, media;

    cout << "Informe a nota 1: " << endl;
    cin >> n1;
    cout << "Informe a nota 2: " << endl;
    cin >> n2;

    media = (n1 + n2) / 2;

    if (media == 10){
        cout << "Aprovado com Distinção!";
    }
    else{
        if (media >= 7) {
            cout << "Aprovado!";
        }
        else{
            if (media < 7){
                cout << "Reprovado!";
            }
        }
    }
    return 0;
}
