#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor_hora, salario;
    int qtd_hora;


    cout << "Digite quanto voc� ganha por hora: " << endl;
    cin >> valor_hora;
    cout << "Digite quantas horas voc� trabalhou esse m�s: " << endl;
    cin >> qtd_hora;

    salario = qtd_hora * valor_hora;

    cout << endl << "Seu sal�rio total do m�s � de R$ " << salario << endl << endl;
    return 0;
}
