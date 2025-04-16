#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    char resposta;

    while (resposta !='N'){
        cout << "\nVocê deseja imprimir uma tabuada?" << endl;
        cout << "Digite: (S - para SIM) ou (N - para NÃO): ";
        cin >> resposta;
        resposta = toupper(resposta);

        if (resposta != 'S' ){
            break;
        }

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> n;

    if (n >= 1 && n <= 9){

    cout << "\nTabuada do " << n << endl;
    cout << "******************";
    for (i=1; i<=10; i++){
        cout << "\n" << i << " X " << n << " = " << (i*n);
    }

    cout << "\n******************";

    }
    else{
        cout << "Número Inválido";
    }

    }

    return 0;

}
