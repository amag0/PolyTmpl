#include <iostream>
#include "square.h"

int main(void)
{
  square myquad(1.16);
	
  int check;
  if(myquad.calculateperimeter()) check = myquad.writereport();
    
  if(check) std::cout<<"Fortunately there were no errors."<<std::endl;
  std::cin.ignore();
 
 return 0x0;  
}
