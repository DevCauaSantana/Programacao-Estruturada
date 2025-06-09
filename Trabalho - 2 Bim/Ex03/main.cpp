#include <iostream>
#include <locale.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[10], vetor2[10];
    int i;

    for (i = 0; i<10; i++){
        cout << "Digite o " << (i+1) << "º valor do VETOR 1: ";
        cin >> vetor1[i];
    }

    cout << endl;

    for (i = 0; i<10; i++){
        cout << "Digite o " << (i+1) << "º valor do VETOR 2: ";
        cin >> vetor2[i];
    }
    cout << "Os valores digitados no VETOR 1 são: ";

    for (i = 0; i<10; i++){
        cout << vetor1[i] << " - ";
    }

    cout << endl;

    cout << "Os valores digitados no VETOR 2 são: ";

    for (i = 0; i<10; i++){
        cout << vetor2[i] << " - ";
    }

    int vetorResult[10];

    for (i=0; i<10; i++){
        vetorResult[i] = vetor1[i] * vetor2[i];
    }

    cout << endl;

   cout << "Os valores dos vetores dos multiplicados são: ";

    for (i = 0; i<10; i++){
        cout << vetorResult[i] << " - ";
    }

    return 0;
}
