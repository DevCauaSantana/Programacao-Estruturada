#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsSantos;

    cout << "\n*** Placar São Paulo X Santos***\n";
    cout << "Digite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;
    cout << "\nDigite a quantidade de gols do Santos: ";
    cin >> golsSantos;

    if(golsSaoPaulo > golsSantos)
    cout << "A festa é tricolor!!!" << endl;
    else{
        cout << "A festa é dos peixes!!!\n";
    }
    return 0;
}
