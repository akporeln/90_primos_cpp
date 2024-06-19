#include <iostream>

using namespace std;

// Función para añadir los 90 primeros números primos
bool Primo(int n)
{
    if (n <= 1) return false;

    // Verificar si aparte del número y 1 ver que no existan más divisores
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int primos = 0;
    // Los números primos empiezan a partir de 2
    int n = 2;
    int suma = 0;
    while (primos <= 90)
    {
        if (Primo(n))
        {
            cout << n << " primo ";
            suma = suma + n;
            primos++;
        }
        n++;
    }
    cout << endl;
    cout << "La suma de los primeros 90 números primos es: " << suma << endl;
    return 0;
}
