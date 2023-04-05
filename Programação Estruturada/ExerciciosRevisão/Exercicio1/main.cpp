#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[10], soma=0,i;

    for(i=0;i<10;i++){

        cout << "Digite o valor" << i+1 << " ° " << " Valor: " ;
        cin >> vetor[i];
        soma += vetor[i];

    };

    for(i=0;i<10;i++){
        cout << " " << vetor[i] << " - " ;
    }

    cout << endl << endl<< "\n A soma dos valores digitados é : " << soma ;



    return 0;
}
