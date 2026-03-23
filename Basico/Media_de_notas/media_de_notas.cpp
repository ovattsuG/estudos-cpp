#include <iostream>

int main(){

    double n1, n2, n3;
    int nota_de_corte = 7;
    std::cout << "Insira as notas do Aluno: " << std::endl;
    std::cin >> n1 >> n2 >> n3;

    double media = (n1 + n2 + n3) /3;

    std::cout << "A media das notas = " << media << std::endl;

    if (media >= nota_de_corte)
    {
    
        std::cout << "Aluno Aprovado!" << std::endl;
    
    }else{

        std::cout << "Aluno Reprovado!" << std::endl;
    }
    
}