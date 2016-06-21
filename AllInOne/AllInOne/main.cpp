#include "mystring.h" 
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   hua_4::string s1("ABC");
   hua_4::string s2("DEF");
   s2.print_string();
   s2 = s1;
   s2.print_string();
   
   for (int i = 0; i < s1.length(); ++i) {
      cout << s1[i] << endl;
   }
   //cout << s1.length() << endl;
   //s1.print_string();
   EXIT_SUCCESS;
   return 0;
}