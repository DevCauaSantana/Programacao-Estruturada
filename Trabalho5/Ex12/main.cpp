#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float soma = 0.0;
    const int max = 20;
    int i;

    cout << setprecision(2);

    for (i = 0; i < max; i++){
        cout << "Nota " << (i+1) << " = " << endl;
        float nota;
        cin >> nota;
        soma +=nota;
    }

    cout << setw(5) << "A média é = " << (soma/max) << endl;

    return 0;
}
