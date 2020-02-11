#include <iostream>

#include "fatorial.h"

int main(void) {
  /*std::cout << "Use o main para testar seu código caso precise" << std::endl;
  std::cout << "A avaliação final ignora este arquivo." << std::endl;
  std::cout << "Ele é útil para clicar em execute e debugar" << std::endl;*/
  int num;

  std::cout << "Digite um numero:" << std::endl;
  std::cin >> num;
  std::cout << "Fatorial: " << std::endl;
  std::cout << fatorial(num) << std::endl;


  return 0;
}
