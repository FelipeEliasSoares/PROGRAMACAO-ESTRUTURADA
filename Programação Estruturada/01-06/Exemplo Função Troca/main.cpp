#include <iostream>

using namespace std;

void troca(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cout << "Entre dois numeros: "; //A fun��o cout imprime o temp
    cin >> a >> b;
    cout << "Voce entrou com " << a << " e " << b << endl;
    troca(a, b);
    cout << "Trocados, eles s�o " << a << " e " << b << endl;
}
