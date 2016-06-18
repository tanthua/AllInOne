#include <iostream>
#include <cstdlib>
#include "sequence1.h"

namespace hua_3
{
	//MODIFICATION MEMBER FUNCTIONS
	void sequence::start() {
		if (size() > 0) {
			current_index = 0;
		}
		else {
			current_index = -1;
		}
	}

	void sequence::advance() {
		if (is_item()) {
			++current_index;
		}
		else {
			current_index = -1;
		}
	}

	void sequence::insert(const value_type& entry) {
		if (size() < CAPACITY) {

		}
	}

	void sequence::attach(const value_type& entry) {
		if (size() < CAPACITY) {
			if (is_item()) {

			}
			else {

			}
		}
	}

	void sequence::remove_current() {
		if (is_item()) {

		}
		else {

		}
	}

	//CONSTANT MEMBER FUNCTIONS
	sequence::size_type sequence::size() const {
		return used;
	} 

	bool sequence::is_item() const {
		if (current_index == -1) {
			return false;
		}
		else {
			return true;
		}
	}

	sequence::value_type sequence::current() const {
		return data[current_index];
	}
}