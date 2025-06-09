#include <iostream>
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

    cout << "Cliente cadastrado com sucesso!\n";

    for (int i = 0; i < qtd; i++) {
        cout << "NOME DO PET: " << strPet[i].nome << endl;
        cout << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
        cout << "RAÇA DO PET: " << strPet[i].raca << endl;
        cout << "SEXO DO PET: " << strPet[i].sexo << endl;
        cout << "IDADE DO PET: " << strPet[i].idade << " ano(s)" << endl;
        cout << "NOME DO DONO DO PET: " << strPet[i].nomeDono << endl;
        cout << "RG: " << strPet[i].rgDono << endl;
        cout << "TELEFONE: " << strPet[i].telefoneDono << endl << endl;
    }

    return 0;
}
