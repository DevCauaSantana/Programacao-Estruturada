#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsSantos;

    cout << "\n*** Placar S�o Paulo X Santos***\n";
    cout << "Digite a quantidade de gols do S�o Paulo: ";
    cin >> golsSaoPaulo;
    cout << "\nDigite a quantidade de gols do Santos: ";
    cin >> golsSantos;

    if(golsSaoPaulo > golsSantos)
    cout << "A festa � tricolor!!!" << endl;
    else{
        cout << "A festa � dos peixes!!!\n";
    }
    return 0;
}
