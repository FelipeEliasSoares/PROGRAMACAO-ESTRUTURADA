#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float media;

    cout << "Digite a m�dia do aluno!!!\n";
    cin >>media;

    if(media >= 0 && media <=10){
        cout << "A media � valida!!!\n";
        if(media >=6)
        {
            cout << "Aluno foi aprovado com media" << media << "!!!";
        }

        else//do if interno
        {
            cout << "Aluno foi reprovado com m�dia" << media;
        }
    }
    else
    {
        cout << "A m�dia � �nv�lida";
    }

}
