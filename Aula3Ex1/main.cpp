#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade!!! \n";
    cin >> idade;

    if(idade >= 18) //verifica se a pessoa tem idade maior ou igual a 18
        {
            cout << "Voc� � maior de idade!!!\n";
        }
        else
        {
            cout << "Voc� � menor de idade!!!\n";
        }

    return 0;
}
