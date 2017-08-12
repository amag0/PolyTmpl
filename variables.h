#ifndef VARIABLES_H
#define VARIABLES_H

#include <cstring>

/*The variables required for each analysis shall be defined as structs
inheriting from both, variable and value<T>.

  struct avariable : public value<float>, public variable {};

abstract functions getname() and getlabel() should be implemented in 
the derived struct.*/

/* base structure for variables definition. variables should be a
derived structure in order to share a container.*/
struct variable {
  virtual char const *getname()=0;
  virtual char const *getlabel()=0;
};
/* base template structure for variables storing values. template
allows variables to be created with int, float, double or string 
values.*/
template <typename T> struct value {
  T v;
  T getvalue() {return v;}
};

#endif