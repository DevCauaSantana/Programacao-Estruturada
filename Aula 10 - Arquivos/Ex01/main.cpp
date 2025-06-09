#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo; // ofstream - Arquivo apenas para saída de dados

    arquivo.open ("Arquivo.txt"); // Abre o arquivo. Cria o arquivo caso ele não exista.

    arquivo << "Gabriel" << endl; // Insere nomes no arquivo (operador "<<")
    arquivo << "Jessé" << endl;

    arquivo.close(); // Fecha o arquivo.

    return 0;
}
