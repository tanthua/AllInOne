#include "poly1.h"
#include "node1.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	hua_5::node* ptr1;
	ptr1 = new hua_5::node;
	ptr1->set_data(3);
	cout << list_length(ptr1) << endl;
	hua_5::node* ptr2;
	ptr2 = new hua_5::node;
	ptr2->set_data(2);
	cout << list_length(ptr2) << endl;
	ptr1->set_link(ptr2);
	cout << list_length(ptr1) << endl;
	list_head_insert(ptr1, 100);
	cout << list_length(ptr1) << endl;
	cout << ptr1->data() << endl;
	cout << ptr1->link()->data() << endl;
   EXIT_SUCCESS;
   return 0;
}