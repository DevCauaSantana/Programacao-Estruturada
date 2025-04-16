#include <iostream>

using namespace std;

int main()
{
    int senha;

    cout << "Digite sua senha: ";
    cin >> senha;

    if(senha==1234){
        cout << "ACESSO PERMITIDO.";
    }
    else{
        cout << "ACESSO NEGADO.";
    }
    return 0;
}
