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
    cout << "Entre dois numeros: "; //A função cout imprime o temp
    cin >> a >> b;
    cout << "Voce entrou com " << a << " e " << b << endl;
    troca(a, b);
    cout << "Trocados, eles são " << a << " e " << b << endl;
}
