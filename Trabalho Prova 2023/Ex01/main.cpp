#include <iostream>
using namespace std;

int main() {
    int n;
    float preco, total = 0;

    cout << "Quantos produtos voc� vai lan�ar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite o pre�o do produto " << i+1 << ": " << endl;
        cin >> preco;
        total += preco;
    }

    cout << "\nO pre�o total da compra foi: " << total << endl;

    return 0;
}
