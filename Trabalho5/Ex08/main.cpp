#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    float altura, peso_ideal;
    char sexo;

    cout << "Informe seu sexo (F - Feminino | M - Masculino)" << endl;
    cin >> sexo;
    cout << "Informe sua altura: " << endl;
    cin >> altura;

    sexo = toupper(sexo);

    if (sexo=='F'){
        peso_ideal = (62.1*altura)-44.7;
        cout << "Sexo: " << sexo << endl;
        cout << "Altura: " << altura << endl;
        cout << "Peso ideal: " << peso_ideal << endl;
    }
    else if(sexo=='M'){
       peso_ideal = (72.7*altura)-58;
        cout << "Sexo: " << sexo << endl;
        cout << "Altura: " << altura << endl;
        cout << "Peso ideal: " << peso_ideal << endl;
    }
    else{
        cout << "Sexo informado incorretamente!!!";
    }

    return 0;
}
