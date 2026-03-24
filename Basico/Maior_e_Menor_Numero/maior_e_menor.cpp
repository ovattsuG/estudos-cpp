#include <iostream>

int main(){

  int num1, num2, num3;
  std::cout << "Insira tres valores para descobrir qual o maior: " << std::endl;
  std::cin >> num1 >> num2 >> num3;  
  int maior;
  int menor;
  
  if (num2 > num1){

    maior = num2;
    
  }else if (num3 > num1)
  {
    maior = num3;
  }else{

    maior = num1;

  }

  if (num2 < num1)
  {

    menor = num2;

  }else if (num3 < num1)
  {

    menor = num3;

  }else{

    menor = num1;

  }
  
  std::cout << "O maior valor = " << maior << std::endl;
  std::cout << "O menor valor = " << menor << std::endl;
    
}