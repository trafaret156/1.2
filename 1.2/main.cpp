#include <iostream>
#include "Fraction.h"
using namespace std;
int main() {
  Fraction f;
  f.Read();
  f.Display();
  cout << "Value: " << f.Value() << endl;
  return 0;
}