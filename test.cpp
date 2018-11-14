#include <iostream>
#include "variable.h"

int main(int argc, char* argv[]){
  var<int> first(3, "integer");
  var<float> second(4.12, "float");
  
  first.report(); std::cout<<std::endl;
  second.report(); std::cout<<std::endl;
  
  // normal program termination
  std::cout<<"press Enter to continue..."<<std::endl;
  std::cin.ignore();
  return 0x0; 
}