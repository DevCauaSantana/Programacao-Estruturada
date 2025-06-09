#include <iostream>
#include <fstream>

using namespace std;

int main()
{/*Outra forma: arquivo a ser aberto já é colocado diretamente após nome da variável arquivo*/
    ofstream arq1;
    //ios::app - abre o arquivo no final (depois do último caractere)
    //função is_open() - testa se o arquivo está realmente aberto
    arq1.open("nomes.txt", ios::app);
    if (arq1.is_open()){
        //arq1 << "Ivan Lopes" << endl;
        //arq1 << "Maria Dantas" << endl;
        arq1 << "Carlos" << endl;
        arq1.close();
    }
    else{
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
