#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int irmao, idade;

    cout << "        Bom dia..." << endl;
    cout << " Qual � o seu nome: ";
    cin >> nome;
    cout << " \n Quantos irm�os voc� tem? ";
    cin >> irmao;
    cout << " \n Qual � a sua idade: ";
    cin >> idade;

    cout << "Ent�o voc� se chama " << nome << ", tem " << irmao << " irm�os, e nasceu em " << (2025-idade) << "?";
    return 0;
}
