#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor_hora, salario;
    int qtd_hora;


    cout << "Digite quanto você ganha por hora: " << endl;
    cin >> valor_hora;
    cout << "Digite quantas horas você trabalhou esse mês: " << endl;
    cin >> qtd_hora;

    salario = qtd_hora * valor_hora;

    cout << endl << "Seu salário total do mês é de R$ " << salario << endl << endl;
    return 0;
}
