#include <iostream>

using namespace std;

int main()
{
    float salario, imposto, salario_final;

    cout << "Informe seu sal�rio: \n";
    cin >> salario;

    imposto = 0.07 * salario;

    salario_final = salario - imposto;

    cout << "Sal�rio bruto: " << salario << " reais" << " \nTotal de impostos: " << imposto << " reais" << "\nSal�rio L�quido: " << salario_final << " reais" << endl;
    return 0;
}
