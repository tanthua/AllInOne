#include "mystring.h" 
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   hua_4::string s1("Testing");
   s1.print_string();
   hua_4::string s2("Another");
   s2.print_string();
   s2 += s1;
   s2.print_string();
   
   EXIT_SUCCESS;
   return 0;
}