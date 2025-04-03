#include <iostream>

using namespace std;

int main()
{
    float salario, imposto, salario_final;

    cout << "Informe seu salário: \n";
    cin >> salario;

    imposto = 0.07 * salario;

    salario_final = salario - imposto;

    cout << "Salário bruto: " << salario << " reais" << " \nTotal de impostos: " << imposto << " reais" << "\nSalário Líquido: " << salario_final << " reais" << endl;
    return 0;
}
