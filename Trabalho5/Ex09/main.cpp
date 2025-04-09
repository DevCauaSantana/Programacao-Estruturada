#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Informe um número positivo inteiro: " << endl;
    cin >> n;

    if (n<0){
        cout << "O número informado não é positivo." << endl;
    }
    else if (n%2==0){
        cout << "O número informado é par." << endl;
    }
    else{
        cout << "O número informado é ímpar." << endl;
    }

    return 0;
}
