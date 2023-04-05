#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float soma = 0.0;
    const int max = 10;
    int i;

    cout << setprecision(2);

    for(i = 0 ; 1 < max; i++){
        cout << "Nota " << (i+1) << "=" << endl;
        float nota;
        cin >> nota;
        soma = soma + nota;
    }

    cout << setw(5) << "Media = " << (soma/max) << endl;
}
