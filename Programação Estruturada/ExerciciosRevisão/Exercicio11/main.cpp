#include <iostream>

using namespace std;

float imc(float altura, float peso);

int main()
{
    cout << "Programa para calcular o IMC de uma pessoa";
    cout << endl;
    cout << endl;

    float altura, peso,resultado;
    cout << "Digite a altura: ";
    cin >> altura;

    cout << "Digite o peso: ";
    cin >> peso;

    resultado=imc(altura,peso);
    cout << "O seu IMC é " << resultado;
}

float imc(float altura, float peso){
    float imc;
    imc = peso / (altura * altura);
    return imc;

}



