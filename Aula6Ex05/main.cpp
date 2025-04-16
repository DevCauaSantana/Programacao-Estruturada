#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra1[20], palavra2[20];
    cout << "Digite a palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite a palavra2: " << endl;
    cin >> palavra2;
    cout << "Unindo Palavra 1 e Palavra 2 temos: " << strcat(palavra2, palavra1) << endl;
    return 0;
}
