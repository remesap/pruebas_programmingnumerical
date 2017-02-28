#include <iostream>
#include <string>
int main (void){

  std::string str;
  
  do {
    std::cout << "Enter text: ";
    getline(std::cin , str);
    std::cout << "You entered: " << str << std::endl;
  }
  while (str !="goodbye");

    std::cout << "goodbye!" << std::endl;
  return 0;
}
