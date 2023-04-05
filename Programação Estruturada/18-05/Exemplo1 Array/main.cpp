#include <iostream>
#include <locale>
#define DIM 5
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[DIM] = {10, 15, 20, 25, 30};
    int vetorl[] = {10, 20, 30, 40, 50 ,60, -1};
    int i;

    cout << "Vetor com tamanho pré-definido com define \n";
    for (i=0; i<DIM; i++){
            cout << "Vetor na posição " << i << " = " << vetor[i] << endl;
    }
    cout << "\nVetor terminado por -1 \n";
    for (i=0;vetorl[i] > 0 ; i++){
        cout << "Vetor na posição" << i << " = " << vetorl[i]<< endl;
    }
    return 0;
}
