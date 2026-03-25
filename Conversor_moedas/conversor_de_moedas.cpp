#include <iostream>


int main(){

    int opcao;
    double valor;
    double valor_em_reais;
    double taxa_de_cambio;
    std::cout << "### Selecione qual moeda dejesa converter para R$ ###" << std::endl;
    std::cout << "1 - USD" << std::endl;
    std::cout << "2 - EUR" << std::endl;
    std::cout << "3 - JPY" << std::endl;
    std::cout << "4 - GBP" << std::endl;
    std::cout << "5 - CHF" << std::endl;
    std::cin >> opcao;
    std::cout << "digite o valor que deseja converter: Ex(5.35) " << std::endl;
    std::cin >> valor;
    switch (opcao)
    {
    case 1:
        taxa_de_cambio = 5.22;
        valor_em_reais = valor * taxa_de_cambio;
        break;
    
    case 2:
        taxa_de_cambio = 6.05;
        valor_em_reais = valor * taxa_de_cambio;
        break;
    
    case 3:
        taxa_de_cambio = 0.033;
        valor_em_reais = valor * taxa_de_cambio;
        break;
    
    case 4:
        taxa_de_cambio = 6.99;
        valor_em_reais = valor * taxa_de_cambio;
        break;
    
    case 5:
        taxa_de_cambio = 6.59;
        valor_em_reais = valor * taxa_de_cambio;
        break;
    
    default:
        std::cout << "Opcao invalida!" << std::endl;
        break;
    }
    
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "O valor em reais = R$" << valor_em_reais << std::endl;
}