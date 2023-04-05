#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float salario, taxa;
    setlocale(LC_ALL, "Portuguese");


    cout << "Digite seu Salario: ";
    cin >> salario;

    if(salario > 2000){
        cout << "15%";
    }




}
