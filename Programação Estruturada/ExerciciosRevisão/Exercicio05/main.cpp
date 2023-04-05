#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[] ={1,2,3,4,5,6,7,8,9,10};
    int i;
    cout << "Os valores do vetor são: " << endl;
    for(i=9;i>=0;i--){
        cout << vetor[i] << " - ";
    };
    cout << endl;
    cout << endl;
    cout << "Os valores do vetor na ordem inversa são: " << endl;
    for(i=0;i<=9;i++){
        cout << vetor[i] << " - ";
    };
    cout << endl;
    return 0;
}
