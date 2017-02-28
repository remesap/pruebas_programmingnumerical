#include <iostream>

int main(void){

  int n, factorial=1, i=1;
  std::cin >> n;
  
  for (;i<=n;++i){
    factorial*=i;
  }

  std::cout << factorial << std::endl;

  return 0;
  
}
