#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cout << "Digite o valor 1: " << endl;
    cin >> n;
    cout << "Digite o valor 2: " << endl;
    cin >> m;

    if (n<m){
         while (n<=m){
        cout << n << endl;
        n++;
         }
    }
    else{
            while (m<=n){
        cout << m << endl;
        m++;
    }
    }
    return 0;
}
