#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char pesquisa, nome[20];
    int cidade,pizza,i;
    //PERGUNTA 1
    cout << "BOM DIA, estou coletando algumas informações poderia me ajudar ?" << endl;
    cout << "Digite S para continuar" << endl;
    cout << "Digite N para não continuar" << endl;
    cin >> pesquisa;

        switch(pesquisa)
        {
        case 'S':
            cout << "Nossa voçe disse sim, mas eu iria continuar do mesmo jeito" << endl;
        break;

        case 'N':
            cout << "Obrigado pela informação, mas eu vou continuar" << endl;
        break;

        default:
            cout << "Você não tem nem a capacidade responder com S ou N. Eu vou continuar voçe não sabe responder" << endl;

        };
     //PERGUNTA   2
     cout << "\nDigite seu nome individuo : ";
     cin >> nome;

     cout << "\Nossa seu nome é " << nome  << " que nome LINDOOOOO!" << endl;

     //PERGUNTA 3
        cout << "\nVocê nasceu em que cidade? ";
        cout << "Escolha pelo número:" << endl;
        cout << "1 - São paulo " << endl;
        cout << "2 - Outra" << endl;
        cout << "Digite: ";
        cin >> cidade;

            if(cidade == 1)
                cout << "OLHA QUE CIDADE LEGAAAAAAAL PARA SE VIVER EM..." << endl;
                else if (cidade == 2)
                cout << "Ah não conheço, deve ser caipira";
            else
                cout << "Voçe me decepciona";

    //PERGUNTA 4

    cout << "Voce gosta de Pizza ?" << endl ;
    cout << "Digite o numero de acordo com abaixo" << endl ;
    cout << "1 - para SIM" << endl;
    cout << "2 - para NÂO" << endl;
    cout << "Digite : ";
    cin  >> pizza;

        if (pizza == 1)
              for(i = 1, i<=5, i++){
                cout << "O " << nome << "Gosta de PIZZA" << endl;
            }







    return 0;
}
