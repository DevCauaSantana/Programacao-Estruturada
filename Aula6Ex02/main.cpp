#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
    string nome;

    setlocale(LC_ALL, "Portuguese");

    cout << "Ol�, vamos conversar?" << endl;
    //PERGUNTA 1
    cout << "Qual � o seu nome? " << endl;
    getline(cin, nome);
    cout << "\nNossa, " << nome << ", que nome feio. \n";

    return 0;
}
