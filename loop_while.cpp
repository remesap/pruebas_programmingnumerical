#include <iostream>

int main (void){

  int n=10;

  while (n>0){
    std::cout << n << " ,";
    --n;
  }

  std::cout << "liftoff!" << std::endl;
  return 0;
}
