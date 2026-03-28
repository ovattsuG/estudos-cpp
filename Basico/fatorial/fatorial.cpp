#include <iostream>

int main(){

    int numero;
    int fatorial = 1;

    std::cout << "Digite o numero para calcular o fatorial: " << std::endl;
    std::cin >> numero;
    if (numero >= 0)
    {
        for (int i = 1; i <= numero; i++)
        {
            fatorial = fatorial * i;
        }

        std::cout << "Fatorial de " << numero << " = " << fatorial << std::endl;
    }
    else
    {
        std::cout << "Nao existe fatorial de numero negativo" << std::endl;
    }

}