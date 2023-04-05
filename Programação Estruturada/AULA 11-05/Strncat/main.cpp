#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra1[20],palavra2[20];
    cout << "Digite a palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite a palavra2: " << endl;
    cin >> palavra2;

    cout << "Palavra 1 = " << palavra1 << endl;
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Agora Palavra 2 = " << strncat(palavra2,palavra1, 2) << endl;
    return 0;
}
