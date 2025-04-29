#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_atual, salario_final, valor_aumento;
    int aumento_porcentagem;

    cout << "Digite seu salário atual: ";
    cin >> salario_atual;

    if(salario_atual <= 1500){
        aumento_porcentagem = 20;
        valor_aumento = 0.2 * salario_atual;
        salario_final = salario_atual + valor_aumento;
    }
    else if(salario_atual > 1500 && salario_atual < 2000){
        aumento_porcentagem = 15;
        valor_aumento = 0.15 * salario_atual;
        salario_final = salario_atual + valor_aumento;
    }
    else if(salario_atual >= 2000 && salario_atual < 3000){
        aumento_porcentagem = 10;
        valor_aumento = 0.1 * salario_atual;
        salario_final = salario_atual + valor_aumento;
    }
    else{
        aumento_porcentagem = 5;
        valor_aumento = 0.05 * salario_atual;
        salario_final = salario_atual + valor_aumento;
    }

    cout << "\nSeu salário antes do reajuste era de R$ " << salario_atual;
    cout << "\nSeu salário foi aumentado em " << aumento_porcentagem << " porcento.";
    cout << "\nSeu salário foi aumentado em R$ " << valor_aumento;
    cout << "\nSeu salário atual é de R$ " << salario_final;



    return 0;
}
