#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <iomanip>
using namespace std;
//-------------------------------------------------
template <class T>
class Base {
  protected:
    T& derived = static_cast<T&>(*this);
  public:
    template<typename U> U operator()(U y) const { return derived(y); }
};
//-------------------------------------------------
template<class U, typename... P>
class Add_x: public Base<Add_x<U>> {
  private:
    U x;
  public:
    Add_x(U i) : x{i} {}
    U operator()(U y) const { return x + y; }
};
//-------------------------------------------------
template<class U>
class Subtract_x: public Base<Subtract_x<U>> {
  private:
    U x;
  public:
    Subtract_x(U i) : x{i} {}
    U operator()(U y) const { return y - x; }
};
//-------------------------------------------------
template<class U>
class Multiply_x: public Base<Multiply_x<U>> {
  private:
    U x;
  public:
    Multiply_x(U i) : x{i} {}
    U operator()(U y) const { return x * y; }
};
//-------------------------------------------------
template<class U>
class Divide_x: public Base<Divide_x<U>> {
  private:
    U x;
  public:
    Divide_x(U i) : x{i} {}
    U operator()(U y) const { return y / x; }
};
//-------------------------------------------------
template<class U>
class ReduceMod_x: public Base<ReduceMod_x<U>> {
  private:
    U x;
  public:
    ReduceMod_x(U i) : x{i} {}
    U operator()(U y) const { return y % x; }
};
//-------------------------------------------------
#endif
