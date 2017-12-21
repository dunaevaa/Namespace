#include <iostream> 
#include "header1.h" 
#include "header2.h" 
using namespace std; 
int main() {
  cout << mac::a << endl;
  cout << nus::b << endl;
{
  using namespace mac; 
  foo;
}
{
  using namespace nus; 
  foo;
}
return 0;
}
