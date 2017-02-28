#include <iostream>

int main (void){

  double n, suma=0.0;

  do {
    std::cout << "Enter a number: ";
    std::cin >> n;
    suma+=n;
  }
  while (n!=0);

    std::cout << "Suma total: " << suma << std::endl;

  return 0;
}
