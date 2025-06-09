#include <iostream>
using namespace std;
int main() {

 float p1[15], p2[15], media[15];

 string situacao[15];

 for (int i = 0; i < 5; i++) {
 cout << "Digite a nota da P1 do aluno " << i+1 << ":";
 cin >> p1[i];

 cout << "Digite a nota da P2 do aluno " << i+1 << ":";
 cin >> p2[i];

 cout << endl;

 media[i] = (p1[i] + p2[i]) / 2;

     if(media[i] >= 6){
        situacao[i] = "Aprovado";
     }
     else{
        situacao[i] = "Reprovado";
     }
 }

 cout << "\nSituação dos alunos:\n";

 for (int i = 0; i < 5; i++) {

 cout << "Aluno " << i+1 << ": P1 = " << p1[i] << " P2 = " << p2[i]
 << "\nMedia = " << media[i] << "\n" << situacao[i] << endl;
 }
 return 0;
}
