#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    while (i <= 100){
        if (i%10 == 0){
            cout << "O n�mero " << i << " � divis�vel por 10." << endl;
        }
        i = i + 1;
    }

    return 0;
}
