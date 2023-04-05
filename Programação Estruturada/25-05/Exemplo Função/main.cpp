#include <iostream>

using namespace std;

int acheMaior(int a, int b, int c){
    int maior;

    maior= a;

        if(b> maior){
            maior = b;
        }

        if(c > maior){
            maior = c;
        }

     return maior;

}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, x, y, z, maior_1,maior_2;

    cout << "Digite o primeiro conjunto de 3 números: ";
    cin >> a >> b >> c ;

    maior_1 = acheMaior(a,b,c);

    cout << "Digite o segundo conjunto de 3 numeros: ";
    cin >> a >> b >> c ;

    maior_2 = acheMaior(a,b,c);


    cout << endl << maior_1 << " + " << maior_2
        << " = " << maior_1 + maior_2 << endl;
    return 0;
}
