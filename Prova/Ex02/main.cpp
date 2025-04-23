#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int senha, i;

    for (i=0; i<3; i++){
        cout << "Digite sua senha: ";
        cin >> senha;

        if(senha == 1234){
            cout << "Senha Correta." << endl;
            break;
        }
        else{
            cout << "Senha Incorreta." << endl;
        }
    }

    return 0;
}
