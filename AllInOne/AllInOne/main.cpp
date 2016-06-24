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
	list_insert(ptr2, 200);
	cout << list_length(ptr1) << endl;
	cout << ptr1->data() << endl;
	cout << ptr1->link()->data() << endl;
	cout << "length: " << list_length(ptr1) << endl;
	cout << "Print: ";
	print_node(ptr1);
	hua_5::node* search_ptr;
	search_ptr = list_search(ptr1, 100);
	cout << "Result: ";
	cout << search_ptr->data() << endl;
	hua_5::node* locate_ptr;
	locate_ptr = list_locate(ptr1, 3);
	cout << "After locating: " << locate_ptr->data() << endl;
	//list_head_remove(ptr1);
	//cout << "length: " << list_length(ptr1) << endl;
	//cout << "Print: ";
	//print_node(ptr1);
	//hua_5::node* ptr3 = ptr1;
	//list_remove(ptr3);
	hua_5::node* head;
	hua_5::node* tail;
	list_copy(ptr1, head, tail);
	cout << "length: " << list_length(head) << endl;
	cout << "print: ";
	print_node(head);

	EXIT_SUCCESS;
	return 0;
}

