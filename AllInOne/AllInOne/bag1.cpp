#include "bag1.h"
#include <cstdlib>

namespace hua_3
{
	//CONSTRUCTOR
	//MODIFICATION MEMBER FUNCTIONS
	bag::size_type bag::erase(const value_type& target) {
		size_type count = 0;
		for (size_type i = 0; i < used; ++i) {
			if (data[i] == target) {
				data[i] = data[used - 1];
				data[used - 1] = 0;
				--used;
			}
		}
		return count;
	}

	bool bag::erase_one(const value_type& target) {
		bool flag = false;
		for (size_type i = 0; i < used; ++i) {
			if (data[i] == target) {
				flag = true;
				data[i] = data[used - 1];
				data[used - 1] = 0;
				--used;
				break;
			}
		}
		return flag;
	}

	void bag::insert(const value_type& entry) {
		if (size() < CAPACITY) {
			++used;
			data[used] = entry;
		}
		else {
			//do nothing
		}
	}

	void bag::operator+=(const bag& addend) {

	}

	//CONSTANT MEMBER FUNCTIONS
	bag::size_type bag::count(const value_type& target) const {
		size_type count = 0;
		for (size_type i = 0; i < used; ++i) {
			if (data[i] == target) {
				++count;
			}
		}
		return count;
	}
}
