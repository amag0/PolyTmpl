#include "square.h"

/* constructor of the square class, initializes variable values.*/
square::square(float edge)
{ 
  n.v = 4;
  a.v = edge;
  P.v = 0.0f;
}
/* write report: outputs a string.*/
int square::writereport (void)
{
  printf("The perimeter of a edge %3.2f square is %4.2f \n", 
    a.v, P.v);
  return 1;
}
/* constructor of the triangle class, initializes variable values.*/
triangle::triangle(float edge)
{ 
  n.v = 4;
  b.v = edge;
  P.v = 0.0f;
}
/* write report: outputs a string.*/
int triangle::writereport (void)
{
  printf("The perimeter of a edge %3.2f triangle is %4.2f \n", 
    b.v, P.v);
  return 1;
}
