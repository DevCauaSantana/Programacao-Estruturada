#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float n1, n2, n3, media;

    cout << "Insira o seu nome: " << endl;
    cin >> nome;
    cout << "Insira a nota 1: " << endl;
    cin >> n1;
    cout << "Insira a nota 2: " << endl;
    cin >> n2;
    cout << "Insira a nota 3: " << endl;
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "O Aluno " << nome << " possui média " << media;

    return 0;
}
