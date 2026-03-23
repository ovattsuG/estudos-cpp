#include <iostream>

int main(){

    int j = 11;
    for (int i = 1; i < j; i++)
    {
        for (int k = 1; k < j; k++)
        {
            std::cout << i << " X " << k << "= ";
            std::cout << i * k << std::endl;
        }
        
        std::cout << std::endl;
    }
   
}