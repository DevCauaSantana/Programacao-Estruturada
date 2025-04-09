#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matricula, i;
    float n1, n2, n3, media;
    char conceito;

    cout << "Informe a matrícula do aluno: ";
    cin >> matricula;
    cout << "Informe a nota 1 do aluno: ";
    cin >> n1;
    cout << "Informe a nota 2 do aluno: ";
    cin >> n2;
    cout << "Informe a nota 3 do aluno: ";
    cin >> n3;

    media = (n1 + n2*2 + n3*3)/6;

    if(media >= 9){
        conceito = 'A';
    }
    else if(media >= 7.5 && media < 9){
        conceito = 'B';
    }
    else if(media >=6 && media < 7.5){
        conceito = 'C';
    }
    else if(media >= 4 && media < 6){
        conceito = 'D';
    }
    else{
        conceito = 'E';
    }

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Média de Aproveitamento: " << media << endl;
        cout << "Conceito: " << conceito << " - APROVADO!!!" << endl;
    }
    else{
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Média de Aproveitamento: " << media << endl;
        cout << "Conceito: " << conceito << " - REPROVADO!!!" << endl;
    }

    return 0;
}
