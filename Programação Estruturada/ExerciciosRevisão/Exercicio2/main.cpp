#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[10],i, soma=0;

    for(i=0;i<10;i++){
        cout << "Digite " << i << "°" << "valor: ";
        cin >> vetor[i];

        if(vetor[i]% 3 == 0){
            soma= soma +1 ;
        }
    }

    cout << endl;
    cout << "Os valores digitados são: " ;
    for (i=0;i<10;i++){
        cout  << vetor[i] << " - ";
    }
    cout << endl;
    cout << "\n Foram digitados " << soma << "  multiplos de 3" ;
    return 0;
}
