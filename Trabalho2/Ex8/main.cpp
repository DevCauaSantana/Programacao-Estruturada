#include <iostream>

using namespace std;

int main()
{
    float valor_hora, n_hora, salario;

    cout << "Digite quanto voc� ganha por hora: \n";
    cin >> valor_hora;
    cout << "Digite o n�mero de horas trabalhadas: \n";
    cin >> n_hora;

    salario = valor_hora * n_hora;

    cout << "O sal�rio desse m�s �: " << salario << " reais." << endl;
    return 0;
}
