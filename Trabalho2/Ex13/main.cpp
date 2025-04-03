#include <iostream>

using namespace std;

int main()
{

    float n1, n2, maior;

    cout << "Informe o primeiro número: " << endl;
    cin >> n1;
    cout << "Informe o segundo número: " << endl;
    cin >> n2;

    if (n1 > n2){
        maior = n1;
    }
    else{
        maior = n2;
    }

    cout << "O maior número é: " << maior << endl;

    return 0;
}
