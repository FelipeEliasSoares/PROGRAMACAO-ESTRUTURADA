#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float area, perimetro, raio;
    cout << "Qual é o raio do circulo : ";
    cin >>raio;

    perimetro = raio * 2 * 3.14;
    area = raio * raio * 3.14;

    cout << "O perimetro desse circulo é : " <<perimetro << endl;
    cout << "A area do circulo é : " <<area;

    return 0;
}
