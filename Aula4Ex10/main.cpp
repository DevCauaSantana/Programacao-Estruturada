#include <iostream>

using namespace std;

int main()
{
    int n, qtd_n;
    do{
       cout << "Digite um n�mero: " << endl;
       cin >> n;
       qtd_n++;
    }
    while(n!=0);

    qtd_n--;
    cout << "Foram digitados " << qtd_n << " n�mero";
}
