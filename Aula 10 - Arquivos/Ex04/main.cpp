#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    //criando um objeto da classe ofstream
    arquivo.open("arquivoFOR.txt");
    //construindo/abrindo o arquivo aleatorio.txt
    for(int i=0; i<10; i++){
        string nome;
        cout << "Digite seu nome: ";
        cin >> nome;
        arquivo << nome << endl;
    }
    arquivo.close();//fechando o arquivo aleatorio
    return 0;
}
