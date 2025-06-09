#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    //criando um objeto da classe ofstream
    arquivo.open("arquivoFOR.txt");
    //construindo/abrindo o arquivo aleatorio.txt
    for(int i=0; i<=10; i++){
        arquivo << "Você está salvando dados de: " << i << endl;
        cout << "Você está salvando dados de: " << i << endl;
    }
    arquivo.close();//fechando o arquivo aleatorio
    return 0;
}
