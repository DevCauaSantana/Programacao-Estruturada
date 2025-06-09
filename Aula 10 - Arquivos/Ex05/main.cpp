#include <iostream>
#include <fstream>
#include <string.h>


using namespace std;

int main()
{
    string abc;

    ifstream arq_leitura ("arquivo.txt");
    //ifstream - abre o arquivo apenas para leitura
    if (arq_leitura.is_open()) {

    while (! arq_leitura.eof() ) {
    //eof() - retorna true ao atingir o fim do arquivo
        getline (arq_leitura, abc);
        cout << abc << endl;
    }
    arq_leitura.close();
    }else {
        cout << "ERRO: arquivo não foi aberto ou não existe.";
    }
    return 0;
}
