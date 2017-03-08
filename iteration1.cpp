#include <iostream>
#include <cmath>

double f (double x);
double g (double x);

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  const double eps = 1.0e-3;
  int NMAX = 20;
  double x0=0, xr;

  xr=x0;
    for (int ii=0; ii<=NMAX ; ++ii){

      xr=g(xr);

      std::cout << ii << "  " << g(xr)<< "  " << f(xr) << std::endl;

      if (std::fabs(f(xr)) < eps) break;


    }




  return 0;

}

double f (double x)
{
  return exp(-x)-x;
}
double g (double x)
{
  return exp(-x);
  // x*x-2*x+3=0;                                                                                                                             
}
