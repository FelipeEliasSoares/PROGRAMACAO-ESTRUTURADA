#include <iostream>

using namespace std;

int main()
{
    double matriz[4][5], metade[4][5];
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            cout << "Digite um valor para a posic�o " << i << ", " << j << " da matriz: ";
            cin >> matriz[i][j];
            metade[i][j] = (matriz[i][j] / 2)
            ;
        }
    };
    cout << "Os valores do matriz s�o: " << endl;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            cout << matriz[i][j] << "\t";
        }
            cout << endl;
    }
    cout << "A Matriz com valores resultantes: " << endl;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            cout << metade[i][j] << "\t";
        }
            cout << endl;
    }

}
