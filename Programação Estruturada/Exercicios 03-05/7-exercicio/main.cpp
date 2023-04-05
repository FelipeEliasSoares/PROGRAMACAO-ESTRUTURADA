#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quantidade;
    int opc;
    cout << "Digite 100 para Cachorro Quente. Custa 9,20" << endl;
    cout << "Digite 101 para Bauru Simples. Custa 12,00" << endl;
    cout << "Digite 102 para Bauru com Ovo. Custa 13,00" << endl;
    cout << "Digite 103 para Hamburger. Custa 10,00" << endl;
    cout << "Digite 104 para Cheeseburguer. Custa 12,00" << endl;
    cout << "Digite 105 para Refrigerante Lata. Custa 5,00" << endl;
    cout << "Digite 106 para Agua. Custa 3,00" << endl;

    cout << "\n Digite o seu Numero : ";
    cin >> opc;

    switch(opc) {

        case 100:
        cout << "Voce escolheu Cachorro Quente. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 9.20;
        cout << "O toltal a ser pago щ " << quantidade;


    break;

    case 101:
        cout << "Voce escolheu Bauru simples. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 12.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    case 102:
        cout << "Voce escolheu Bauru com OVO. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 13.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    case 103:
        cout << "Voce escolheu Hamburger. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 10.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    case 104:
        cout << "Voce escolheu CheeseBurguer. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 12.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    case 105:
        cout << "Voce escolheu Refrigerante Lata. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 5.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    case 106:
        cout << "Voce escolheu Agua. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 3.00;
        cout << "O toltal a ser pago щ " << quantidade;
    break;

    default :
        cout << "Opчуo Invalida.";

    }



}
