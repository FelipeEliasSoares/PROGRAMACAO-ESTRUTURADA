#include <iostream>

using namespace std;

void cumprimenta(char inic1, char inic2)
{
    setlocale(LC_ALL,"Portugues");
    cout << "Ola, " << inic1 << inic2 << "!" << endl;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char primeiro, segundo;

    cout << "Entre com duas iniciais (sem separa��o): ";
    cin >> primeiro >> segundo;
    cumprimenta(primeiro, segundo);
    return 0;
}
