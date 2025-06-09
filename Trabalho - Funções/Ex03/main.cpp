#include <iostream>
using namespace std;

int calculaFatorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*calculaFatorial(n-1);
}

int main()
{
    int n;

    cout<<"Digite o valor para calcular o Fatorial: ";
    cin>> n;

    cout<<"O fatorial é: "<<calculaFatorial(n)<<endl;
}
