#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int golsSaoPaulo, golsInter;
    cout << "\n *** Placar São paulo X Internacional *** \n";
    cout << "* Digite a quantidade de São Paulo:" << endl;
    cin >> golsSaoPaulo;
    cout << "\n Digite a quantidade de gols do Internacional: ";
    cin >> golsInter;

    if(golsSaoPaulo > golsInter) {
        cout << "A festa é do tricolor \n" ;
        cout << endl << " Siga o Lider...";

    }

    else {
        cout << "Não adianta tentar enganar o computador.";
        cout << endl << "Com certeza o São Paulo ganhou";
    }
}
