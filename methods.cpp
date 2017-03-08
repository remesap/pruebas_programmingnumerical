#include <iostream>
#include <cmath>

double f (double x);
double bisection (double xl, double xu, int NMAX, double EPS);
double regulafalsi (double xl, double xu, int NMAX, double EPS);

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  const double eps = 1.0e-6;

  /*int NMAX = 20;                                                                                                                            
  double xl=12, xu=18, xr;                                                                                                                    
  double x1=0, deltax;*/

  //return  bisection (12, 18, 20, eps);                                                                                                      

  return  regulafalsi (12, 18, 20, eps);


}

double bisection (double xl, double xu, int NMAX, double EPS)
{

    double xr=0;
    double xold=0;
    double deltax=0;

    for (int ii=0; ii<=NMAX ; ++ii){

    xr = 0.5*(xu+xl);
    deltax=std::fabs(xr-xold);
    xold=xr;
 std::cout << ii << "  " << xl << "  " << xu << "  " << xr << "  " << f(xr) << "  " << deltax << std::endl;

    if (std::fabs(f(xr)) < EPS) break;

    if (f(xr)*f(xl)>0)
      xl = xr;

    else
      xu = xr;


  }

}

double regulafalsi (double xl, double xu, int NMAX, double EPS){

  double xr=0;
  double xold=0;
  double deltax=0;

  for (int ii=0; ii<=NMAX ; ++ii){
  
    xr = xu-f(xu)*(xl-xu)/(f(xl)-f(xu));
    deltax=std::fabs(xr-xold);
    xold=xr;

    std::cout << ii << "  " << xl << "  " << xu << "  " << xr << "  " << f(xr) << "  " << deltax << std::endl;

    if (std::fabs(f(xr)) < EPS) break;

    if (f(xr)*f(xl)>0)
      xl = xr;

    else
      xu = xr;
}
}

double f (double x)
{
  return 9.81*68.1/x*(1-std::exp(-x/68.1*10))-40;
}



