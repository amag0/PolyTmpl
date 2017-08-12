#ifndef SQUARE_H
#define SQUARE_H

#include <cstdio>
#include <string.h>
#include "variables.h"

/* polygon is the abstract base class for square and triangle 
perimeter calculation derived classes.*/
class polygon {
 public:
  virtual int calculateperimeter(void) = 0;
  virtual int writereport(void) = 0;
};

/* variables required by the square analysis are defined under sqr
namespace to allow sharing variable names between squares and 
triangles.*/ 
namespace sqr {
struct numberofsides : public value<int>, public variable {
  char const *getname()  {return "number of sides"; }
  char const *getlabel() {return "N";               }
};
struct lengthofside : public value<float>, public variable {
  char const *getname()  {return "length of side"; }
  char const *getlabel() {return "a";              }
};
struct perimeter : public value<float>, public variable {
  char const *getname()  {return "perimeter"; }
  char const *getlabel() {return "P";         }
};
}

/*square is the derived class to calculate the perimeter of a 
square.*/ 
class square : public polygon {
 private:
  sqr::numberofsides n;
  sqr::lengthofside  a;
  sqr::perimeter     P;
 public: 
  square(float edge);
  int calculateperimeter(void) 
    { P.v = (float)n.v * a.v; 
      return 1; }
  int writereport(void);
};

/* variables required by the triangle analysis are defined under trg
namespace to allow sharing variable names between squares and 
triangles.*/
namespace trg
{
struct numberofsides : public value<int>, public variable {
  char const *getname()  {return "number of sides"; }
  char const *getlabel() {return "N_t";             }
};
struct lengthofside : public value<float>, public variable {
  char const *getname()  {return "edge length"; }
  char const *getlabel() {return "b";           }
};
struct perimeter : public value<float>, public variable {
  char const *getname()  {return "perimeter"; }
  char const *getlabel() {return "P";         }
};
}

/* triangle is the derived class to calculate the perimeter of an
equilateral triangle.*/
class triangle : public polygon {
 private:
  trg::numberofsides n;
  trg::lengthofside  b;
  trg::perimeter      P;
 public:
  triangle(float edge);
  int calculateperimeter (void)
    { P.v = (float)n.v * b.v; return 1;}
  int writereport(void);
};

#endif