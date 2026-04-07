#include <iostream>

int main(){

    std::string palavra;
    std::string invertida = "";
    std::cout << "Digite uma palvra para inverter: " << std::endl;
    std::cin >> palavra;
    // std::cout << palavra.length();

    for (int i = palavra.length(); i >= 0; i--)
    {
        invertida += palavra[i];
    }

    std::cout << invertida << std::endl;
    
}