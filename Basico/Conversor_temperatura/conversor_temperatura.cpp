#include <iostream>
#include <cctype>


int main (){

    int graus;
    int conversao;
    char opcao;
    std::cout << "Digite C para converter Celsius para Fahrenheit ou F para converter Fahrenheit para Celsius:  " << std::endl;
    std::cin >> opcao;
    opcao = std::toupper(opcao);
    switch (opcao)
    {
    case 'C':
        std::cout << "Digite o valor que deseja converter: " << std::endl;
        std::cin >> graus;
        conversao = (graus * 9/5) + 32;
        std::cout << graus << "C em Fahrenheit = " << conversao << "F" << std::endl;
        break;

    case 'F':
        std::cout << "Digite o valor que deseja converter: " << std::endl;
        std::cin >> graus;
        conversao = (graus - 32) * 5/9;
        std::cout << graus << "F em Celsius = " << conversao << "C" << std::endl;
        break;

    default:
        break;
    }
}