#ifndef PROJECT_H
#define PROJECT_H

#include "square.h"
#include <vector>

class project {
 private:
  std::vector<polygon *> analyses;
 
 public:
  void Add (polygon * newpol) {analyses.push_back(newpol);}
  void Calculate();
  void Report();
};

void project::Calculate()
{
  for (std::vector<polygon *>::iterator it = analyses.begin();
    it != analyses.end(); it++) (*it)->calculateperimeter();
}

void project::Report()
{
  for (std::vector<polygon *>::iterator it = analyses.begin();
    it != analyses.end(); it++) (*it)->writereport();
}

#endif