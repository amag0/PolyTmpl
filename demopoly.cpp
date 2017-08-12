#include <iostream>
#include "square.h"
#include "project.h"

float quads[8] = {1.43, 6.18, 5.54, 2.98, 2.66, 5};
float trias[2] = {2, 3.11};

int main(void)
{
  project prj;
  
  // polygon *p;
  square *s;
  triangle *t;
  
  for (int i=0; i<8; i++) {
    s = new square(quads[i]);
    prj.Add(s);
  }
  
  for (int i=0; i<2; i++) {
    t = new triangle(trias[i]);
    prj.Add(t);
  }
    
  prj.Calculate();
  prj.Report();
  std::cin.ignore();
 
 return 0x0;  
}
