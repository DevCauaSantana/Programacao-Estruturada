#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario = 1000;
    float comissao = 5;
    float valorVendas, salarioFinal;
    cout << "Digite o valor total de venda no m�s: ";
    cin >> valorVendas;
    salarioFinal = salario + ((valorVendas * comissao) / 100);
    cout << "O sal�rio final �: \n" << salarioFinal << " reais.";

    return 0;
}
