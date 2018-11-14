#ifndef VARIABLE_H
#define VARIABLE_H

#include <iostream>
#include <string>

// namedvar is the base clase of the variable template to allow for
// polymorphic use of the variables.

class namedvar{
  private:
    std::string name;
  public:
    namedvar(const std::string n):name(n) {} // constructor
    // interface
    void report(void);    
};

void namedvar::report(void){
  std::cout<<name;
  return;
}
#endif