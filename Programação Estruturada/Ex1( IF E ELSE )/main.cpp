#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int golsSaoPaulo, golsInter;
    cout << "\n *** Placar S�o paulo X Internacional *** \n";
    cout << "* Digite a quantidade de S�o Paulo:" << endl;
    cin >> golsSaoPaulo;
    cout << "\n Digite a quantidade de gols do Internacional: ";
    cin >> golsInter;

    if(golsSaoPaulo > golsInter) {
        cout << "A festa � do tricolor \n" ;
        cout << endl << " Siga o Lider...";

    }

    else {
        cout << "N�o adianta tentar enganar o computador.";
        cout << endl << "Com certeza o S�o Paulo ganhou";
    }
}
