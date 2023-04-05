#include <iostream>

using namespace std;

int main()
{
    int numero[15],i;
    setlocale(LC_ALL,"Portuguese");

    cout << "Digite um numero indenticar par ou impar" << endl;

    for(i=0;i < 15;i++){
        cout << "Digite um numero: " << i+1 << endl;
        cin >> numero[i];
    }
    cout << "Os valores são: " << endl;
    for(i=0; i< 15; i++){
        cout << numero[i];
        if (numero[i] % 2 ==0)
            cout << " - Par " << endl;
        else
            cout << " - Impar " << endl;

    }

}
