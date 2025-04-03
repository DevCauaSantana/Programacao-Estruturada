#include <iostream>

using namespace std;

int main()
{
    float n;

    cout << "Insira um valor: " << endl;
    cin >> n;

    if (n > 0){
        cout << "O número digitado é positivo.";
    }
    else{
        if (n < 0){
            cout << "O número digitado é negativo.";
        }
        else{
            if (n == 0){
                cout << "O número 0 é neutro.";
            }
        }
    }
    return 0;
}
