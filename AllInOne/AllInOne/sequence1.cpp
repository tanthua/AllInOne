#include <iostream>
#include <cstdlib>
#include "sequence1.h"

namespace hua_3
{
	//CONSTRUCTOR
	sequence::sequence() {
		//empty sequence and no current index
		current_index = -1;
		used = 0;
	}
	//MODIFICATION MEMBER FUNCTIONS
	void sequence::start() {
		//start at zero, if empty, then no current index
		if (size() > 0) {
			current_index = 0;
		}
		else {
			current_index = -1;
		}
	}

	void sequence::advance() {
		//if there is current index, then move forward
		if (is_item()) {
			//if current index is the last item, then no more current
			if (current_index == used) {
				//last item already.
            current_index = -1;
			} else {
				++current_index;
			}
		}
		else {
			current_index = -1;
		}
	}

	void sequence::insert(const value_type& entry) {
      //can only insert if size < CAP
		if (size() < CAPACITY) {
			if (is_item()) {
				//add before current item
			} else {
				//no current item, then add at the front		
            //Shift items 1 index to the right before adding new entry
            if (size() != 0) {
               for (size_type i = size() - 1; i >= 0; --i) {
                  data[i + 1] = data[i];
               }
            }
            data[0] = entry;
			}
         ++used;
		} else {
         std::cout << "Cannot insert. Running out of CAP\n";
		}

	}

	void sequence::attach(const value_type& entry) {
      //can only attach if size < CAP
      if (size() < CAPACITY) {
         if (is_item()) {
            //add before current item
         }
         else {
            //no current item, then add at the end
            data[used] = entry;
         }
      }
      else {
         std::cout << "Cannot attach. Running out of CAP\n";
      }
      ++used;
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
         if (current_index >= used) {
            return false;
         }
         else {
            return true;
         }
		}
	}

	sequence::value_type sequence::current() const {
		return data[current_index];
	}
}