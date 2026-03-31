#include <iostream>
#include <cstring> 
int main(){

    char palavra[20];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int contador_vogais = 0;
    std::cout << "Insira uma palavra para saber o numero de vogais dela: " << std::endl;
    std::cin >> palavra;
    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {

            if (vogais[j] == palavra[i])
            {
                contador_vogais++;
            }
            
        }
        
    }
    std::cout << "A palavra " << palavra << " contem " << contador_vogais << " vogais!!" << std::endl;
    
}