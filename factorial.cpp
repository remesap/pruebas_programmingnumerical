#include <iostream>

int main (void){

  int n, i=1, factorial=1;

  std::cin >> n;
  
  do{

    factorial*=i;
    ++i;
  }
  while(i<=n);

  std::cout << factorial << std::endl;

  return 0;
}
