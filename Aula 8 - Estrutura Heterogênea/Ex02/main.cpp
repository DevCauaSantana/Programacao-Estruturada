#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int qtd;

    cout << "Informe quantos carros deseja cadastrar: ";
    cin >> qtd;


    struct EstruturaCarro{
        char marca[40];
        char modelo[40];
        char placa[7];
        char chassi[17];
        char cor[20];
        int anoFabricacao;
    } strCarro[qtd];

    cin.ignore();

    int i;
    for(i=0; i<qtd; i++){
        cout << "\nCarro " << (i+1) << endl << endl;
        cout << "Informe o marca do carro: ";
        cin.getline(strCarro[i].marca, 40);
        cout << "Informe a modelo do carro: ";
        cin.getline(strCarro[i].modelo, 40);
        cout << "Informe o placa do carro: ";
        cin.getline(strCarro[i].placa, 7);
        cout << "Informe a chassi do carro: ";
        cin.getline(strCarro[i].chassi, 17);
        cout << "Informe a cor do carro: ";
        cin.getline(strCarro[i].cor, 20);
        cout << "Informe o ano de fabricação do carro: ";
        cin >> strCarro[i].anoFabricacao;
        cout << endl;
        fflush(stdin);
        //cin.ignore(); caso o fflush não funcione
    }

    cout << "\nCarros cadastrados com sucesso!\n\n";

    for(i=0; i<qtd; i++){
        cout << "\nCarro " << (i+1) << endl << endl;
        cout << "Marca: " << strCarro[i].marca << endl;
        cout << "Modelo: " << strCarro[i].modelo << endl;
        cout << "Placa: " << strCarro[i].placa << endl;
        cout << "Chassi: " << strCarro[i].chassi << endl;
        cout << "Cor: " << strCarro[i].cor << endl;
        cout << "Ano de Fabricação: " << strCarro[i].anoFabricacao << endl << endl;
    }

    return 0;
}
