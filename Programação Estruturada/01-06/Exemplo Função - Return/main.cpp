#include <iostream>

using namespace std;

int abs(int x)
    {
        if (x < 0)
            x = -x;


        return x;
    }

int main()
{
    int n;
    cout << "Entre um numero: ";
    cin >> n;

    cout << "Valor absoluto de " << n << " eh " << abs(n)<< endl;
    return 0;
}
