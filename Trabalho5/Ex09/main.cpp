#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Informe um n�mero positivo inteiro: " << endl;
    cin >> n;

    if (n<0){
        cout << "O n�mero informado n�o � positivo." << endl;
    }
    else if (n%2==0){
        cout << "O n�mero informado � par." << endl;
    }
    else{
        cout << "O n�mero informado � �mpar." << endl;
    }

    return 0;
}
