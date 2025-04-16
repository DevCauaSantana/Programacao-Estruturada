#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float valor, vfinal;
    int opc;

    cout << "Qual é o produto? ";
    cin >> nome;
    cout << "\nQual é o valor do produto? ";
    cin >> valor;

    cout << "\nDe acordo com o menu abaixo, informe como deseja pagar:" << endl ;
    cout << "1 - pagamento à vista (10% desconto)." << endl ;
    cout << "2 - pagamento com 30 dias de prazo (sem desconto.)" << endl ;
    cout << "3 - pagamento em 10X (Cartão de crédito - sem desconto - sem acréscimo)." << endl ;
    cout << "4 - pagamento em 10X (Boleto - 10% acréscimo)." << endl ;
    cin >> opc;

    switch (opc){
        case 1:
            vfinal = valor - (valor * 0.1);
            cout << "O valor do produto com desconto é: " << vfinal << ".";
        break;
        case 2:
            vfinal = valor;
            cout << "O valor do produto para pagamento com 30 dias é: " << vfinal << ".";
        break;
        case 3:
            vfinal = valor;
            cout << "O valor do produto em 10X no cartão é: " << vfinal << ".";
        break;
        case 4:
            vfinal = valor + (valor * 0.1);
            cout << "O valor do produto em 10X no boleto é: " << vfinal << ".";
        break;
        default:
            cout << "Opção inválida!!!" ;
        break;
    }
    return 0;
}
