#include <iostream>

int main(){

    int numero;
    std::cout << "Digite um valor para descobrir se e par ou impar: " << std::endl;
    std::cin >> numero;
    if (numero % 2 == 0)
    {
        std::cout << numero << " e Par!" << std::endl;  
    
    }else{

        std::cout << numero << " e impar!" << std::endl;
    }
    
}