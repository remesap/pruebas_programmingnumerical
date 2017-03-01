#include <iostream>
#include <math.h>
int main (void){

  double pi;
  double suma=0;
  for (int n=999, i=0; i<=n; ++i){

    pi = pow(-1,i)*4/(2*i+1);
    suma +=pi;
    std::cout << i+1 << " : " << suma << std::endl;
  }

  return 0;
}
