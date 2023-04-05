#include <iostream>

using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int num[4],i;

   for(i=0;i < 4;i++){
    cout << "Digite um numero: ";
    cin>> num[i];
   }

    for(i=0; i < 4; i++){
    cout << "O seu numero é " << num[i] << endl;
   }
}
