#include <cstdio>
#include "variables.h"

 /* Esto no funciona... y si... defino las variables fuera
 y en la clase pongo punteros? la template tiene que ser la
 clase derivada de otra clase, de forma que pueda utilizar el
 puntero a la clase base.
 */
 
 
 
class square {
 public:
  numberofsides n;
  lengthofside  a;
  perimeter     P;
  
  square(float edge);
  int calculateperimeter(void) 
    { P.v = (float)n.v * a.v; 
      return 1; }
  int writereport(void);
};

square::square(float edge)
{ 
  n.v = 4;
  a.v = edge;
  P.v = 0.0f;
}

int square::writereport (void)
{
  printf("The perimeter of a edge %3.1f square is %4.2f \n", 
    a.v, P.v);
  return 1;
}