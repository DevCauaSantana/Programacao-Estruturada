#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int irmao, idade;

    cout << "        Bom dia..." << endl;
    cout << " Qual é o seu nome: ";
    cin >> nome;
    cout << " \n Quantos irmãos você tem? ";
    cin >> irmao;
    cout << " \n Qual é a sua idade: ";
    cin >> idade;

    cout << "Então você se chama " << nome << ", tem " << irmao << " irmãos, e nasceu em " << (2025-idade) << "?";
    return 0;
}
