#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;

    cout << "Este programa ir� executar algumas opera��es matem�ticas." << endl;
    cout << "Cinco n�meros ser�o necess�rios." << endl << endl;
    cout << "Digite o primeiro n�mero: " << endl;
    cin >> num1;
    cout << "Digite o segundo n�mero: " << endl;
    cin >> num2;
    cout << "Digite o terceiro n�mero: " << endl;
    cin >> num3;
    cout << "Digite o quarto n�mero: " << endl;
    cin >> num4;
    cout << "Digite o quinto n�mero: " << endl;
    cin >> num5;
    soma = num1 + num2;
    cout << "A soma do primeiro e do segundo n�mero �: " << soma << endl;
    subtracao = num3 - num1;
    cout << "A subtra��o do terceiro pelo primeiro n�mero �: " << subtracao << endl;
    divisao = num2 / num1;
    cout << "A divis�o do segundo n�mero pelo primeiro n�mero: " << divisao << endl;
    multiplicacao = num1 * num2;
    cout << "A multiplica��o do segundo n�mero pelo primeiro n�mero �: " << multiplicacao << endl;
    resto = num4 % num5;
    cout << "O resto da divis�o do quarto n�mero pelo quinto n�mero �: " << resto << endl;

    return 0;
}
