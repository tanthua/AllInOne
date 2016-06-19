#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   cout << "Hello!!!" << endl;
   int *data = new int[30];
   data[0] = 4;
   for (int i = 0; i < 30; ++i) {
      cout << data[i] << " ";
   }
   cout << endl;
   EXIT_SUCCESS;
   return 0;
}