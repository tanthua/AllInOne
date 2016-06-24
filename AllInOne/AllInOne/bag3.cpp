#include "bag3.h"
#include <iostream>
#include <cstdlib>

namespace hua_5
{
	//CONSTRUCTOR and DESTRUCTOR
	bag::bag() {
		head_ptr = NULL;
		many_nodes = 0;
	}

	bag::bag(const bag& source) {
		node* tail_ptr;
		list_copy(source.head_ptr, head_ptr, tail_ptr);
	}

	bag::~bag() {
		list_clear(head_ptr);
	}

	//MODIFICATION MEMBER FUNCTIONS
	bag::size_type bag::erase(const value_type& target) {
		node* erase_ptr = head_ptr;
		size_type count = 0;
		while (erase_ptr != NULL) {
			if (erase_ptr->link()->data() == target) {
				list_remove(erase_ptr);
				--many_nodes;
				++count;
			}
			erase_ptr = erase_ptr->link();
		}
		return count;
	}

	bool bag::erase_one(const value_type& target) {
		node* erase_ptr = head_ptr;
		while (erase_ptr != NULL) {
			if (erase_ptr->link()->data() == target) {
				--many_nodes;
				return true;
			}
			erase_ptr = erase_ptr->link();
		}
		return false;
	}

	void bag::insert(const value_type& entry) {
		list_head_insert(head_ptr, entry);
		++many_nodes;
	}

	void bag::operator +=(const bag& addend) {
		many_nodes = many_nodes + addend.many_nodes;
		node* temp_head_ptr;
		node* temp_tail_ptr;
		list_copy(addend.head_ptr, temp_head_ptr, temp_tail_ptr);
		temp_tail_ptr->set_link(head_ptr);
		head_ptr = temp_tail_ptr;
	}

	void bag::operator =(const bag& source) {
		list_clear(head_ptr);
		node* temp_tail_ptr;
		list_copy(source.head_ptr, head_ptr, temp_tail_ptr);
	}

	//CONSTANT MEMBER FUNCTIONS
	bag::size_type bag::count(const value_type& target) const {
		node* count_ptr = list_search(head_ptr, target);
		size_type count = 0;
		while (count_ptr != NULL) {
			++count;
			count_ptr = count_ptr->link();
		}
		return count;
	}

	//NONMEMBER FUNCTIONS 
	bag operator +(const bag& b1, const bag& b2) {
		bag finalBag;
		finalBag += b1;
		finalBag += b2;
		return finalBag;
	}
}