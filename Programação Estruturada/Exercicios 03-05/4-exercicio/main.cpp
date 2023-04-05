#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float valor, desconto, valor_final;
    char nome[20];

    cout << "Digite o nome do produto : ";
    cin >> nome;
    cout << "Digite o valor do produto : ";
    cin >> valor;

    desconto = 13 * valor /100;
    valor_final = valor - desconto;

    cout << "\n O produto é " << nome << endl;
    cout << "\n Valor original é " << valor << endl;
    cout << "\n O desconto foi de " <<desconto << endl;
    cout << "\n E o valor final foi de "<<valor_final << endl;
    return 0;
}
