#include "poly1.h"
#include "node1.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void print_node(hua_5::node* ptr) {

	while (ptr != NULL) {
		cout << ptr->data() << " ";
		ptr = ptr->link();
	}
	cout << endl;
}

int main() {
	
	EXIT_SUCCESS;
	return 0;
}

