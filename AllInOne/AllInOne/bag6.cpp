#include "bag6.h"
#include <cstdlib>

namespace hua_10
{
	template class bag<int>;
	//CONSTRUCTORS AND DESTRUCTOR
	template <class Item>
	bag<Item>::bag() {
		root_ptr = NULL;
		//size = 0 as well
	}

	template <class Item>
	bag<Item>::bag(const bag& source) {
		root_ptr = tree_copy(source.root_ptr);
	}

	template <class Item>
	bag<Item>::~bag() {
		tree_clear(root_ptr);
		root_ptr = NULL;
	}

	//MODIFICATION functions
	template <class Item>
	bag<Item>::size_type bag<Item>::erase(const Item& target) {
		size_type count = 0;

	}

	template <class Item>
	bool bag<Item>::erase_one(const Item& target) {

	}
}