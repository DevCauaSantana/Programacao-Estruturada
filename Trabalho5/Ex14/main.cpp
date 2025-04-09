#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int max = 15;
    float salario, soma_salario = 0, maior_salario = 0, soma_filhos = 0;
    int filhos;

    for (int i = 0; i < max; i++) {
        cout << "Habitante " << (i + 1) << endl;

        cout << "Informe o sal�rio: R$ ";
        cin >> salario;

        cout << "Informe o n�mero de filhos: ";
        cin >> filhos;

        soma_salario += salario;
        soma_filhos += filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        cout << "---------------------------------------" << endl;
    }

    float media_salario = soma_salario / max;
    float media_filhos = soma_filhos / max;


    cout << "M�dia do sal�rio da popula��o: R$ " << media_salario << endl;
    cout << "M�dia do n�mero de filhos: " << media_filhos << endl;
    cout << "Maior sal�rio informado: R$ " << maior_salario << endl;

    return 0;
}
