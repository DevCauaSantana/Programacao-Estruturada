#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float valor, desconto, valor_final;

    cout << "Informe o nome do produto: " << endl;
    cin >> nome;
    cout << "Informe o valor do produto: " << endl;
    cin >> valor;

    desconto = 0.13 * valor;
    valor_final = valor - desconto;

    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor Final: " << valor_final << endl;

    return 0;
}
