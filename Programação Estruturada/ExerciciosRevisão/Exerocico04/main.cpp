#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int p1[15], p2[15] ,media, i;

    for(i =0;i<15;i++){
        cout << "Digite a nota da P1 do aluno " << i+1 << ": ";
        cin>>p1[i];
        cout << "Digite a nota da P2 do aluno " << i+1<< ": ";
        cin>>p2[i];
        cout << endl;
    }

    for(i=0;i<15;i++){
        media=(p1[i]+p2[i])/2;
        cout << "Aluno: " << i+1 << "P1= " << p1[i] << "P2= " << p2[i] << endl;
        cout << "Media = " << media << endl;
        if(media>=6){
            cout << "Aprovado" << endl;
        }
        else{
            cout << "Reprovado" << endl;
        }
     }
    return 0;
}
