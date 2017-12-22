#include <iostream> 
#include "header1.h" 
#include "header2.h" 
using namespace std; 
using namespace dun;
using namespace all;
int main() {
  cout << a << endl;
  cout << b << endl;
  using dun::foo; 
  foo();
 return 0;
}
