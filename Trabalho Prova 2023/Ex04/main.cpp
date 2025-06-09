#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

// Função para calcular lucro
float lucro(float precoCusto, float precoVenda, int qntEstoque) {
    return (precoVenda - precoCusto) * qntEstoque;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n_produtos;
    cout << "Programa para cadastrar Produtos e calcular LUCRO." << endl << endl;
    cout << "Quantos produtos deseja cadastrar? ";
    cin >> n_produtos;

    struct Produto {
        int cod;
        float precoCusto;
        float precoVenda;
        int qntEstoque;
    };

    Produto strProduto[n_produtos];

    fstream arquivo("arquivo.txt", ios::out | ios::app);

    if (!arquivo.is_open() || arquivo.fail()) {
        cout << "ERROR: arquivo não aberto." << endl;
        return 1;
    }

    // Escrevendo cabeçalho no arquivo
    arquivo << "Programa para cadastrar Produtos e calcular LUCRO." << endl << endl;
    arquivo << "Quantos produtos deseja cadastrar? " << n_produtos << endl << endl;

    for (int i = 0; i < n_produtos; i++) {

        cout << "\n\nINFORME O CÓDIGO DO PRODUTO: ";
        arquivo << "INFORME O CÓDIGO DO PRODUTO: " << endl;
        cin >> strProduto[i].cod;
        arquivo << strProduto[i].cod << endl;

        cout << "INFORME O PREÇO DE CUSTO DO PRODUTO: ";
        arquivo << "INFORME O PREÇO DE CUSTO DO PRODUTO: " << endl;
        cin >> strProduto[i].precoCusto;
        arquivo << strProduto[i].precoCusto << endl;

        cout << "INFORME O PREÇO DE VENDA DO PRODUTO: ";
        arquivo << "INFORME O PREÇO DE VENDA DO PRODUTO: " << endl;
        cin >> strProduto[i].precoVenda;
        arquivo << strProduto[i].precoVenda << endl;

        cout << "INFORME A QUANTIDADE EM ESTOQUE DO PRODUTO: ";
        arquivo << "INFORME A QUANTIDADE EM ESTOQUE DO PRODUTO: " << endl;
        cin >> strProduto[i].qntEstoque;
        arquivo << strProduto[i].qntEstoque << endl;

        float lucroProduto = lucro(strProduto[i].precoCusto, strProduto[i].precoVenda, strProduto[i].qntEstoque);

        cout << "O Produto: " << strProduto[i].cod << " pode gerar R$ " << lucroProduto << " de lucro." << endl;
        arquivo << "O Produto: " << strProduto[i].cod << " pode gerar R$ " << lucroProduto << " de lucro." << endl << endl;
    }

    arquivo.close();

    return 0;
}
