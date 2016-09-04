#include <iostream>

int main (void){
  
  double millas{};
  double milla{1.609};
  double km{};
  
  std:: cout << "Escriba el número de millas" << std:: endl;
  std:: cin >> millas;
  
  km = millas/milla;
  
  std:: cout << millas << " millas son " << km << " km" << std::endl;
  
  return 0;

}
