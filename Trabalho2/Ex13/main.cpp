#include <iostream>

using namespace std;

int main()
{

    float n1, n2, maior;

    cout << "Informe o primeiro n�mero: " << endl;
    cin >> n1;
    cout << "Informe o segundo n�mero: " << endl;
    cin >> n2;

    if (n1 > n2){
        maior = n1;
    }
    else{
        maior = n2;
    }

    cout << "O maior n�mero �: " << maior << endl;

    return 0;
}
