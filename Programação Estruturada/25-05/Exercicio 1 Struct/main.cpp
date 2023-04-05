#include <iostream>
#include <cstring>
#define DADOS 2
using namespace std;

int main()
{
    cout << "\n\nDigite seus dados\n" << endl;
    setlocale(LC_ALL,"Portuguese");
    struct EstruturaDados{
        char nome[60];
        char cpf[20];
        char rg[20];
        char cidade[20];
        char rua[20];
        char numero[5];
        }strDados[DADOS];

        int i;
         for(i=0;i<DADOS;i++){
            cout << "Digite seu nome: ";
            cin.getline(strDados[i].nome, 60);


            cout << "Informe o seu CPF: ";
            cin.getline(strDados[i].cpf, 20);

            cout << "Informe seu RG:";
            cin.getline(strDados[i].rg, 20);

            cout << "Digite a sua cidade: ";
            cin.getline(strDados[i].cidade, 20);


            cout << "Digite a sua rua: ";
            cin.getline(strDados[i].rua, 20);


            cout << "Digite o seu numero: ";
            cin >>strDados[i].numero;
            cout << endl;
            getwchar();
         }

         cout << "\nOs Dados Cadatrados foram! \n\n";
         for(i=0;i<DADOS;i++){
            cout << "O seu nome é :" << strDados[i].nome << endl;
            cout << "O seu CPF é: " << strDados[i].cpf << endl;
            cout << "O numero do seu RG é: " << strDados[i].rg << endl;
            cout << "O sua cidade é : " << strDados[i].cidade << endl;
            cout << "O sua rua é : " << strDados[i].rua << endl;
            cout << "O seu numero é : " << strDados[i].numero << endl;
            cout << endl;
         };
    return 0;
}
