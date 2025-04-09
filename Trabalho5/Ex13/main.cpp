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
        cout << "Número " << (i+1) << " = " << endl;
        int n;
        cin >> n;

        if(n%2==0){
                 soma +=n;
                 qtd++;
        }

    }

    if(qtd>0){
        cout << setw(5) << "A média dos números pares é = " << (soma/qtd) << endl;
    }else {
        cout << "Nenhum número par foi digitado." << endl;
    }


    return 0;
}
