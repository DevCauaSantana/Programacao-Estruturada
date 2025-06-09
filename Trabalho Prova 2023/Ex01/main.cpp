#include <iostream>
using namespace std;

int main() {
    int n;
    float preco, total = 0;

    cout << "Quantos produtos você vai lançar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite o preço do produto " << i+1 << ": " << endl;
        cin >> preco;
        total += preco;
    }

    cout << "\nO preço total da compra foi: " << total << endl;

    return 0;
}
