#include "mystring.h" 
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   hua_4::string s1("ABC");
   hua_4::string s2("def");
   s1.print_string();
   hua_4:string ss;
   ss = s1 + s2;
   EXIT_SUCCESS;
   return 0;
}