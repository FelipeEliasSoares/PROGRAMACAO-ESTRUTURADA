#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

//Usada para verificar se duas strings são iguais. Esta função retorna 0 se as strings são iguais.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra1[20],palavra2[20];
    cout << "Digite a palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite a palavra2: " << endl;
    cin >> palavra2;
    if (strcmp(palavra1, palavra2)== 0){
        cout << "As palavras são iguais";
    }
    else{
        cout << "As palavras são diferentes";
    }
    return 0;
}
