#include <iostream>
#include <cstring>
#include <stdio.h>
#include <locale>
#include <fstream>
using namespace std;

int main()
{
    ofstream arquivo;
    int qtd,i;

    cout << "Quantos animais voce vai cadastrar? ";
    cin >> qtd;

    struct EstrutaPET
    {
       char nomePET[60];
       char especie[40];
       char raca[40];
       char sexo[2];
       char idade[10];
       char nomeDono[20];
       char rg[15];
       char telefone[10];
    }strPET[qtd];

    for(i=0;i<qtd;i++){
        cout << "INFORME O NOME DO PET:  ";
        cin >>strPET[i].nomePET;
        fflush(stdin);

        cout << "INFORME A ESPECIE DO PET: ";
        cin.getline(strPET[i].especie,40);
        fflush(stdin);

        cout << "INFORME A RACA DO PET: ";
        cin.getline(strPET[i].raca,40);
        fflush(stdin);

        cout << "INFORME O SEXO DO PET: ";
        cin.getline(strPET[i].sexo,2);
        fflush(stdin);

        cout << "INFORME A IDADE DO PET: ";
        cin.getline(strPET[i].idade,10);
        fflush(stdin);

        cout << "INFORME O NOME DO DONO DO PET: ";
        cin.getline(strPET[i].nomeDono,20);
        fflush(stdin);

        cout << "INFORME O RG DO DONO DO PET: ";
        cin.getline(strPET[i].rg,40);
        fflush(stdin);

        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        cin.getline(strPET[i].telefone,40);
        fflush(stdin);

        cout << endl;
    };

    cout << "Cliente cadatrado com sucesso!" << endl;

    for(i=0;i<qtd;i++){
        arquivo.open("PETSHOP.txt", ios::app);
        arquivo <<"NOME DO PET: " << strPET[i].nomePET << endl;
        arquivo <<"ESPECIE DO PET: " << strPET[i].especie << endl;
        arquivo << "RACA DO PET: " << strPET[i].raca << endl;
        arquivo << "SEXO DO PET: " << strPET[i].sexo << endl;
        arquivo << "IDADE DO PET: " << strPET[i].idade << endl;
        arquivo << "NOME DO DONO DO PET: " << strPET[i].nomeDono << endl;
        arquivo << "RG: " << strPET[i].rg << endl;
        arquivo << "TELEFONE: " << strPET[i].telefone << endl;
        arquivo << endl;

        arquivo.close();
        }
    }

