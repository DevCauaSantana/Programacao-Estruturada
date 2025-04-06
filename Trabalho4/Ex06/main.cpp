#include <iostream>

using namespace std;

int main()
{
    int soma, i=100;

    while(i<=200){
        if(i%2==0){
            soma+=i;
        }
        i++;
    }

    cout << "A soma dos números pares contidos entre 100 e 200 é: " << soma << endl;
    return 0;
}
