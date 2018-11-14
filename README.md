# PolyTmpl
Project to study polymorphism and templates in C++

The initial objective is to define a template for defining variables of different types, such as fractions, integers, floats, strings, vectors etc. The variable object will control de variable name, label, units and value. Interface is to be defined through overloading of the operators.

Later, expression classes shall be added. A expresion should be able to:
 - check for consistent units for input variables
 - evaluate
 - evaluate partial derivatives (or gradient in case of vectors)
 
 An analysis would then consist on a vector of input variables which is modified through a set of expressions to obtain results. The analysis will then be capable of:
  - evaluation of the set of expresions
  - optimize throug gradient descent / barrier Interior Point Method
  - writing a report
  
