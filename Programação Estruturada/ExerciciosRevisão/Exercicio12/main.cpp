#include <iostream>
#include <fstream>
#include  <locale>
#include <stdio.h>
using namespace std;

float imc (float altura, float peso);

int main()
{
    int qtd,i;
    float resultado;

    cout << "Programa para calcular o IMC de uma pessoa"
    cout << endl;
    cout << endl;
    cout << "Quantos IMC voce vai calcular?";
    cin >> qtd;

    struct planilha{
        char nome[20];
        float peso;
        float altura;
        float imc;
    }strPLAN[qtd];

    for(i=0;i<qtd;i++){
        cout << "INFORME O NOME DO CLIENTE: ";
        cin >> strPLAN[i].nome;
        fflush(stdin);

        cout << "INFORME O PESO DO CLIENTE: ";
        cin >> strPLAN[i].peso;

        cout << "INFORME A ALTURA DO CLIENTE: ";
        cin >> strPLAN[i].altura;

        resultado= imc(strPLAN[i].peso,strPLAN[i].altura);
        cout << "O IMC é: " << resultado << endl;
        cout << endl;
    }
}

float imc(float peso,float altura){
    float imc;
    imc = peso / (altura*altura);
    return imc;
}


