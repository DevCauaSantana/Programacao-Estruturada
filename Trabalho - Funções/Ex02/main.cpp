#include <iostream>
#include <locale.h>

using namespace std;

float converteTemp(float);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float fahrenheit;

    cout << "Programa para converter a temperatura em Fahrenheit para C�lsius:" << endl << endl;
    cout << "Digite a temperatura em Fahrenheit: " << endl;
    cin >> fahrenheit;
    cout << "A temperatura em graus C�lsius �: " << converteTemp(fahrenheit) << "�F.";
    return 0;
}

float converteTemp (float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
