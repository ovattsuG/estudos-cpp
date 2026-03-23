#include <iostream>
#include<string>

void cabecalho(){

    std::cout << "************************************************" << std::endl;
    std::cout << "************** Calculadora Basica **************" << std::endl;
    std::cout << "************************************************" << std::endl;
    
}

#include <iostream>

int main() {

    char operacao;
    double n1, n2;
    int i = 1;
    cabecalho();

    std::cout << "Digite: [numero] [operador +, -, *, /] [numero]: ";
    std::cin >> n1 >> operacao >> n2;
        
    switch (operacao) {
    case '+':
        std::cout << "Resultado: " << n1 + n2 << std::endl;
        break;
    case '-':
        std::cout << "Resultado: " << n1 - n2 << std::endl;
        break;
    case '*':
        std::cout << "Resultado: " << n1 * n2 << std::endl;
        break;
    case '/':
        if (n2 != 0) 
            std::cout << "Resultado: " << n1 / n2 << std::endl;
        else 
            std::cout << "Erro: Divisao por zero!" << std::endl;
        break;
    default:
        std::cout << "Operador desconhecido." << std::endl;
    }
    return 0;
}                        