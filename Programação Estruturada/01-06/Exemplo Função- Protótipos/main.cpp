#include <iostream>

using namespace std;

float capacidade (float, float, float);

int main()
{
    float comp, larg, alt;
    cout << "Programa para calcular a capacidade de �gua de uma piscina:" << endl << endl;
    cout << "Digite o comprimento da piscina: " << endl;
    cin >> comp;
    cout << "Digite a largura da piscina: " << endl;
    cin >> larg;
    cout << "Digite a altura da piscina: " << endl;
    cin >> alt;
    cout << "A piscina possui : " << capacidade(comp, larg, alt) << " metros cub�cos.";
    return 0;
}

float capacidade(float comprimento, float largura, float altura){
    float resultado;
    resultado = comprimento * largura * altura;
    return resultado;
}
