#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int cod, qtd;
    float total;

    while(cod != 0){

    cout << "------------------------------------------" << endl;
    cout << "| Especificação     | Código | Preço     |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Cachorro quente   | 100    | 9,20      |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Bauro simples     | 101    | 12,00     |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Bauru com ovo     | 102    | 13,00     |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Hamburguer        | 103    | 10,00     |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Cheeseburguer     | 104    | 12,00     |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Refrigerante Lata | 105    | 5,00      |" << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Água              | 106    | 3,00      |" << endl;
    cout << "------------------------------------------" << endl << endl;
    cout << "Informe o código do lanche ou digite 0 para sair: " << endl;
    cin >> cod;

        if (cod == 0 ){
        break;
    }

    cout << "Informe a quantidade que deseja: " << endl;
    cin >> qtd;

    switch (cod){
        case 100:
            total = 9.2 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        case 101:
            total = 12 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        case 102:
            total = 13 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        case 103:
            total = 10 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        case 104:
            total = 12 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
            break;
        case 105:
            total = 5 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        case 106:
            total = 3 * qtd;
            cout << "O total ficou: " << total << " reais." << endl;
        break;
        default:
            cout << "Código inválido!!!" << endl;
    }
    }

    return 0;
}
