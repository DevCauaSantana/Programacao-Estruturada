#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;

    cout << "Digite um n�mero: " << endl;
    cin >> n;

    do{
        n--;
        cout << " " << n << endl;
        i++;
    }
    while(i <= 10);
    return 0;
}
