#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo; // ofstream - Arquivo apenas para sa�da de dados

    arquivo.open ("Arquivo.txt"); // Abre o arquivo. Cria o arquivo caso ele n�o exista.

    arquivo << "Gabriel" << endl; // Insere nomes no arquivo (operador "<<")
    arquivo << "Jess�" << endl;

    arquivo.close(); // Fecha o arquivo.

    return 0;
}
