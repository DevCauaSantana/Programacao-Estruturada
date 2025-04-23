#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char letra;
    cout << "Digite uma letra:" << endl;
    cin >> letra;

    letra = toupper(letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        cout << "\nVogal\n";
    }
    else{
        cout << "\nConsoante\n";
    }
    return 0;
}
