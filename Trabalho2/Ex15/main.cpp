#include <iostream>

using namespace std;

int main()
{
    float n;

    cout << "Insira um valor: " << endl;
    cin >> n;

    if (n > 0){
        cout << "O n�mero digitado � positivo.";
    }
    else{
        if (n < 0){
            cout << "O n�mero digitado � negativo.";
        }
        else{
            if (n == 0){
                cout << "O n�mero 0 � neutro.";
            }
        }
    }
    return 0;
}
