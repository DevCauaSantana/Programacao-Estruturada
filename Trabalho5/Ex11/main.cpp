#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, qtd = 0;
    float n;



    for(i=0; i<15; i++){
        cout << "Digite um n�mero: " << endl;
        cin >> n;

        if(n<0){
            qtd++;
        }
    }

    cout << "Foram digitados: " << qtd << " n�meros negativos." << endl;
    return 0;
}
