#include <iostream>
#include <fstream>

using namespace std;

int main()
{/*Outra forma: arquivo a ser aberto j� � colocado diretamente ap�s nome da vari�vel arquivo*/
    ofstream arq1;
    //ios::app - abre o arquivo no final (depois do �ltimo caractere)
    //fun��o is_open() - testa se o arquivo est� realmente aberto
    arq1.open("nomes.txt", ios::app);
    if (arq1.is_open()){
        //arq1 << "Ivan Lopes" << endl;
        //arq1 << "Maria Dantas" << endl;
        arq1 << "Carlos" << endl;
        arq1.close();
    }
    else{
        cout << "ERRO: arquivo n�o foi aberto ou n�o existe" << endl;
    }
    return 0;
}
