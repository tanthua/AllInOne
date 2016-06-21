#include "mystring.h" 
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   hua_4::string s1("DEF");
   s1.print_string();
   cout << "Current size: " << s1.length() << endl;
   hua_4::string s2("ABC");
   s2.print_string();
   cout << "Current size: " << s2.length() << endl;
   s2 += s1;
   s2.print_string();
   cout << "Current size: " << s2.length() << endl;
   s2 += "G";
   s2.print_string();
   cout << "Current size: " << s2.length() << endl;
   s2 += '!';
   s2.print_string();
   cout << "Current size: " << s2.length() << endl;
   s2 += '!';
   s2.print_string();
   //cout << "Current size: " << s2.length() << endl;
   //s2 += "TESTING THE CAPACITY OF THE STRING";
   //s2.print_string();
   EXIT_SUCCESS;
   return 0;
}