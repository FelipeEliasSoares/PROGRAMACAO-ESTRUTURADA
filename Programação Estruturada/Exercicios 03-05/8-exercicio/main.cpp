#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float peso,altura,peso_ideal;

    cout << "\n INFORME SEU SEXO" << endl;
    cout << "\n Escolha M para masculino" << endl;
    cout << "\n Escolha F para ferminino" << endl;

    cout << "\n Digite aqui :" << endl;
    cin >> sexo;

    if (sexo == 'M'){
        cout << "Informe sua altura : ";
        cin >>altura;
        cout << "Inform seu peso atual : ";
        cin >>peso;
        peso_ideal = (72.7 * altura) - 58;

        cout << "O seu peso ideal seria : " << peso_ideal;


    }



    return 0;
}
