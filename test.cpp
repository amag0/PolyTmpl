#include <iostream>
#include "variable.h"

int main(int argc, char* argv[]){
  namedvar first("first");
  namedvar second("second");
  
  first.report(); std::cout<<std::endl;
  second.report(); std::cout<<std::endl;
  
  // normal program termination
  std::cout<<"press Enter to continue..."<<std::endl;
  std::cin.ignore();
  return 0x0; 
}