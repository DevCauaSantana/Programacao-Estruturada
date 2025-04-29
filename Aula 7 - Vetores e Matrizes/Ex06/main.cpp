#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int n, i;

    cout << "Quantos produtos você vai lançar? ";
    cin >> n;

    float produtos[n], soma;

    for(i = 0; i < n; i++){
        cout << "Digite o valor do produto " << (i+1) << ": ";
        cin >> produtos[i];
        soma+= produtos[i];
    }

    cout << "O valor da compra é de: " << soma;

    return 0;
}
