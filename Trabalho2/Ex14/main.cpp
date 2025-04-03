#include <iostream>

using namespace std;

int main()
{
    float peso, excesso, multa;

    cout << "Informe o peso total de peixes: " << endl;
    cin >> peso;

    if(peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;
        cout << "O peso excedeu o limite previsto (50 quilos), com " << excesso << " quilos em excesso. Assim, deve pagar uma multa de " << multa << " reais.";
    }
    else{
        cout << "Você pescou " << peso << " quilos de peixe e se enquadra no limite previsto (50 quilos).";
    }
    return 0;
}
