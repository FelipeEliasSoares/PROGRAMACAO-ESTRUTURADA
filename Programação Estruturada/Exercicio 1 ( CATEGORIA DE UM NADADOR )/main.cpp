#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;
     cout << "Digite sua idade :";
     cin >>idade;

     if(idade >= 5){
        cout << "Categoria do nadador é: \n";

        else if (idade  >=5 && idade <=7){
            cout << "Infantil A. \n";
            }

     }

