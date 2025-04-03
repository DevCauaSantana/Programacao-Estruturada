#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, n4, media;

    cout << "Digite a nota 1: " << endl;
    cin >> n1;
    cout << "Digite a nota 2: " << endl;
    cin >> n2;
    cout << "Digite a nota 3: " << endl;
    cin >> n3;
    cout << "Digite a nota 4: " << endl;
    cin >> n4;

    media = (n1+n2+n3+n4) / 4;

    cout << "A média bimestral é: " << media << endl;
    return 0;
}
