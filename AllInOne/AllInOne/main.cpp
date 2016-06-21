#include "mystring.h" 
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   hua_4::string s1("ABC");
   s1 += '!';
   s1 += '*';
   s1.print_string();
   EXIT_SUCCESS;
   return 0;
}