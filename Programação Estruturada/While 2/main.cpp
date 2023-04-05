#include <iostream>

using namespace std;

int main()
{
   int contador = 100;

   while ( contador > 0 ){

    if (contador % 10 == 0)
        cout << " numero  =" << contador << endl;

    contador -= 1;
   }
}
