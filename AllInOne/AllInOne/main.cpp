#include "bintree.h"
#include "bintree.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace hua_10;

int main() {

	binary_tree_node<int>* ptr1;
	ptr1 = new binary_tree_node<int>(100);
	cout << "Ptr1: " << ptr1->data() << endl;
	binary_tree_node<int>* ptr1_copy = tree_copy(ptr1);
	cout << "Ptr1_copy: " << ptr1_copy->data() << endl;

	EXIT_SUCCESS;
	return 0;
}

