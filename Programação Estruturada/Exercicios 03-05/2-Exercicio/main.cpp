#include <iostream>

using namespace std;

int main()
{
    char nome[20];
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o seu nome do curso de Sistemas de Informação : ";
    cin >> nome;

    cout << "\n Meu nome é :" << nome << endl;
    cout << "\n Sou do curso de Sistemas de Informação" << endl;
    cout << "\n Estou no primeiro ano " << endl;
    cout << "\n Gosto de programação!!!" << endl;


}
