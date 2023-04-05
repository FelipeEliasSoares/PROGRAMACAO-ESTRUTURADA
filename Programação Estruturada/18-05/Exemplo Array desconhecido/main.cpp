#include <iostream>

using namespace std;

int main()
{
    const int tamanho = 30;
    float notas[tamanho], media = 0.0;
    int i=0, j;

    do{
        cout << "Digite a nota do aluno " <<(i+1) << ": " << endl;
        cin >> notas[i];
    }while (notas[i++] >= 0);

    i--;
    for (j = 0; j < i;j++){
        media += notas[j];
    }
    cout << "\nMedia das notas: " << (media/i) << endl;
    return 0;
}
