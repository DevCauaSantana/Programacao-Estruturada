#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float soma = 0.0;
    const int max = 20;
    int i, qtd = 0;

    cout << setprecision(2);

    for (i = 0; i < max; i++){
        cout << "N�mero " << (i+1) << " = " << endl;
        int n;
        cin >> n;

        if(n%2==0){
                 soma +=n;
                 qtd++;
        }

    }

    if(qtd>0){
        cout << setw(5) << "A m�dia dos n�meros pares � = " << (soma/qtd) << endl;
    }else {
        cout << "Nenhum n�mero par foi digitado." << endl;
    }


    return 0;
}
