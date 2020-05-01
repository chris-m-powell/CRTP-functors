#include "base.h"
#define PRINT_HEADER(i) cout << "\t" <<  "+"<< i << "\t" << "-" << i << "\t" << "*" << i <<  "\t" << "/" << i << "\t" << "%" << i <<  "\n\n"
#define PRINT(i) cout << setprecision(2) << i << "\t"
//-------------------------------------------------
template <class T, typename U>
void client(Base<T> x, U i) { 
  PRINT((x)(i));
}

//-------------------------------------------------
int main() {
  int x = 3; 

  PRINT_HEADER(x);
  for (float i = 0; i < 10; i++) {
    PRINT(i);
    client(Add_x<int>(x), i);
    client(Subtract_x<int>(x), i);
    client(Multiply_x<int>(x), i);
    client(Divide_x<float>(x), i);
    client(ReduceMod_x<int>(x), i);
    cout << endl;
  }

  return 0;
}
//-------------------------------------------------
