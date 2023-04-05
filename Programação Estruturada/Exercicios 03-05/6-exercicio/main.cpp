#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;

    cout << "Digite o seu numero: ";
    cin >> numero;

    if ( numero > 0 ){
        cout << numero << " é positivo ";
    }
    else if (numero == 0){
        cout << numero << " é um valor neutro";
    }

    else {
        cout << numero << " é negativo ";
    }

}
