#include <iostream>

using namespace std;

void oi(void)
{
    cout << "Oi, esse � o primeiro exemplo de defini��o de FUN��O em C++"<< endl;
    cout << "Ainda veremos outros exemplos" << endl << endl;
}

int main()
{
    int i;
    i = 1;
    while(i <= 5)
    {
        oi();
        i = i + 1;
    }

}
