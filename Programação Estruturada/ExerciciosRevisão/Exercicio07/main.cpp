#include <iostream>

using namespace std;

int main()
{
  int matriz[6][6];
    int i,j;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cout << "Digite um valor para a posicão " << i << ", " << j << " da matriz: ";
            cin >> matriz[i][j];
        }
    };

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cout << matriz[i][j] << "\t";
        }
            cout << endl;
    }

    cout << "Os valores da matriz são: ";
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(i == 5 - j){
                cout << matriz[i][j] << " \t ";
            }
            else{
                cout << "  " ;
            }
        }
        cout << endl;
    }
}
