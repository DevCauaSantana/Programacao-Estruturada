#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string nome;
    int i;
    const int max = 3.0;
    float soma = 0.0;

    cout << "Digite seu nome completo:" << endl;
    getline(cin, nome);

    for(i=0; i< max; i++){
        float nota;

        cout << "Digite a nota " << (i + 1) << endl;
        cin >> nota;
        soma+=nota;

    }

    cout << "Nome completo: " << nome << endl;
    cout << "Média: " << soma/max << endl;

    return 0;
}
