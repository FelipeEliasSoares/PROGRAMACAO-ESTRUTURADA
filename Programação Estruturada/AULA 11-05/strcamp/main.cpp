#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

//Usada para verificar se duas strings s�o iguais. Esta fun��o retorna 0 se as strings s�o iguais.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra1[20],palavra2[20];
    cout << "Digite a palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite a palavra2: " << endl;
    cin >> palavra2;
    if (strcmp(palavra1, palavra2)== 0){
        cout << "As palavras s�o iguais";
    }
    else{
        cout << "As palavras s�o diferentes";
    }
    return 0;
}
