#include <iostream>

using namespace std;

int main()
{
    int numero, horatrabalhada;
    double valorporhora, salario;
    cin >> numero;
    cin >> horatrabalhada;
    cin >> valorporhora;
    salario = horatrabalhada*valorporhora;
    cout << "NUMBER = " << numero <<endl;
    cout.precision(2);
    cout << fixed << "SALARY = U$ " << salario <<endl;
    return 0;
}
