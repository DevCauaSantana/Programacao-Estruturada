#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[15], i;

    for (i = 0; i < 15; i++){
        cout << "Digite o número " << (i+1) << ": " << endl;
        cin >> vetor[i];
        if (vetor[i]%2==0){
            cout << "O número " << vetor[i] << " é PAR!!!" << endl;
        }
        else{
            cout << "O número " << vetor[i] << " é ÍMPAR!!!" << endl;
        }
    }


    return 0;
}
