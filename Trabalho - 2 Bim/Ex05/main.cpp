#include <iostream>

using namespace std;

int main() {

 int vetor[10] = {10,9,8,7,6,5,4,3,2,1};

 cout << "Os valores do vetor s�o: \n";

 for (int i = 0; i < 10; i++) {

    cout << vetor[i] << " - ";
 }

 cout << endl;

 cout << "\nOs valores do vetor na ordem inversa s�o: \n";

 for (int i = 9; i >= 0; i--) {

    cout << vetor[i] << " - ";

 }

 cout << endl;

 return 0;
}
