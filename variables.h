#include <cstring>

struct variable {
  virtual char *getname()=0;
  virtual char *getlabel()=0;
};

template <typename T> struct value {
  T v;
};

struct numberofsides : public value<int>, public variable {
  char *getname() {return "number of sides";}
  char *getlabel() {return "N";}
};
struct lengthofside : public value<float>, public variable {
  char *getname() {return "length of side";}
  char *getlabel() {return "a";}
};
struct perimeter : public value<float>, public variable {
  char *getname() {return "perimeter";}
  char *getlabel() {return "P";}
};

