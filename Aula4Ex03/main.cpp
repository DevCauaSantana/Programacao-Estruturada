#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portugese");
    int i = 1; //vari�vel iniciando em 1

    while(i <= 10){
        cout << "N�mero = " << i << endl;
        i = i + 1;
    }

    return 0;
}
