#ifndef VARIADIC_H
#define VARIADIC_H
#include <iostream>
using namespace std;
//-------------------------------------------------
class Variadic {
  protected:
  public:
    template<typename X, typename... Y> static X sum(X x) { return x; }
    template<typename X, typename... Y> static X sum(X x, Y... y) { return x + sum(y...); }
    
    template<typename X, typename... Y> static X product(X x) { return x; }
    template<typename X, typename... Y> static X product(X x, Y... y) { return x * product(y...); }
};
//-------------------------------------------------
#endif
