#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int qtd;

    cout << "Quantos animais você vai cadastrar? ";
    cin >> qtd;

    struct EstruturaPet {
        char nome[40];
        char especie[30];
        char raca[30];
        char sexo;
        int idade;
        char nomeDono[40];
        char rgDono[20];
        char telefoneDono[20];
    } strPet[qtd];

    cin.ignore();

    for (int i = 0; i < qtd; i++) {

        cout << "INFORME O NOME DO PET: ";
        cin.getline(strPet[i].nome, 40);

        cout << "INFORME A ESPÉCIE DO PET: ";
        cin.getline(strPet[i].especie, 30);

        cout << "INFORME A RAÇA DO PET: ";
        cin.getline(strPet[i].raca, 30);

        cout << "INFORME O SEXO DO PET: ";
        cin >> strPet[i].sexo;

        cout << "INFORME A IDADE DO PET: ";
        cin >> strPet[i].idade;
        cin.ignore();

        cout << "INFORME O NOME DO DONO DO PET: ";
        cin.getline(strPet[i].nomeDono, 40);

        cout << "INFORME O RG DO DONO DO PET: ";
        cin.getline(strPet[i].rgDono, 20);

        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        cin.getline(strPet[i].telefoneDono, 20);

        cout << endl;
    }

    ofstream arquivo("arquivoPet.txt");
    if (!arquivo) {
        cout << "Erro ao criar o arquivo!" << endl;
        return 1;
    }

    for (int i = 0; i < qtd; i++) {
        arquivo << "NOME DO PET: " << strPet[i].nome << endl;
        arquivo << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
        arquivo << "RAÇA DO PET: " << strPet[i].raca << endl;
        arquivo << "SEXO DO PET: " << strPet[i].sexo << endl;
        arquivo << "IDADE DO PET: " << strPet[i].idade << " ano(s)" << endl;
        arquivo << "NOME DO DONO DO PET: " << strPet[i].nomeDono << endl;
        arquivo << "RG: " << strPet[i].rgDono << endl;
        arquivo << "TELEFONE: " << strPet[i].telefoneDono << endl;
        arquivo << "----------------------------------" << endl;
    }

    arquivo.close();

    return 0;
}
