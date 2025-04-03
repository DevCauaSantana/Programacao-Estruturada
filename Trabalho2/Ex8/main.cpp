#include <iostream>

using namespace std;

int main()
{
    float valor_hora, n_hora, salario;

    cout << "Digite quanto você ganha por hora: \n";
    cin >> valor_hora;
    cout << "Digite o número de horas trabalhadas: \n";
    cin >> n_hora;

    salario = valor_hora * n_hora;

    cout << "O salário desse mês é: " << salario << " reais." << endl;
    return 0;
}
