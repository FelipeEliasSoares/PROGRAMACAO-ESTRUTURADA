#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
   int i = 1 , num;

   cout << "Informe um numero \n";
   cin >> num;
    cout << "Cs 10 antecessores de " << num << "são : \n";

    do {
        cout << num - 1 << endl;
        i = i + 1 ;
    } while (i <= 10);
}
