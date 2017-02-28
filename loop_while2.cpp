#include <iostream>

int main (void) {

  int n=0;
  int suma=0;

  while (n<101){

    ++n;
    suma = n+suma;
  }

  std::cout << suma << std::endl;

  return 0;
}
