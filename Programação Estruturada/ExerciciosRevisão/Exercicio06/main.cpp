#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4];
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << "Digite um valor para a posicão " << i << ", " << j << " da matriz: ";
            cin >> matriz[i][j];
        }
    };

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << matriz[i][j] << "\t";
        }
            cout << endl;
    }


    return 0;
}
