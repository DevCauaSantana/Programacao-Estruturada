#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float qtd_km, tempo, media;

    cout << "Insira o seu nome: " << endl;
    cin >> nome;
    cout << "Insira a quantidade de quil�metros que andou: " << endl;
    cin >> qtd_km;
    cout << "Insira o tempo gasto em minutos: " << endl;
    cin >> tempo;

    media = qtd_km / (tempo / 60);

    cout << "Ol� " << nome  << ", voc� percorreu " << qtd_km << " km em "<< tempo <<  " minutos, sua velocidade m�dia foi:" << media << "km/h";


    return 0;
}
