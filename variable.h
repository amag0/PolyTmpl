#ifndef VARIABLE_H
#define VARIABLE_H

#include <iostream>
#include <string>

// namedvar is the base clase of the variable template to allow for
// polymorphic use of the variables.

class namedvar{
  protected:
    std::string name;
  public:
    namedvar(const std::string n):name(n) {} // constructor
    // interface
    virtual void report(void)=0;    
};

template <typename T>
class var:public namedvar{
  private:
    T value;
  public:
    var(T v, std::string n):value(v), namedvar(n){} // constructor
    // especialized methods
    void report(void);
};

template <typename T>
void var<T>::report(void){
  std::cout<<name<<" = "<<value;
  return;
}
#endif
