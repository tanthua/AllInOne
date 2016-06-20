/*Implementation of bag 2 using dynamic array
Dynamic array gives the flexibility for bag 2, which can 
shrink and grow if needed
Tan Hua
06/18/2016
*/

#include "bag2.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>

/*Private members:
- value_type *data
- used
- capacity
*/
namespace hua_4 {
   //CONSTRUCTOR and DESTRUCTOR
   bag::bag(size_type initial_capacity) {
      //initial constructor
      data = new value_type[initial_capacity];
      capacity = initial_capacity;
      used = 0;
   }

   bag::bag(const bag& source) {
      //copy constructor
      capacity = source.capacity;
      used = source.used;
      std::copy(source.data, source.data + source.used, data);
   }

   bag::~bag() {
      delete[] data;
   }

   //MODIFICATION MEMBER FUNCTIONS
   void bag::reserve(size_type new_capacity) {
      //allocating bigger array
      value_type *larger_array;

      if (new_capacity == capacity)
         return;

      if (new_capacity < used)
         new_capacity = used;

      //after covering the first two cases, now it's only greater than used
      larger_array = new value_type[new_capacity];
      std::copy(data, data + used, larger_array);
      delete[] data;
      data = larger_array;
      capacity = new_capacity;
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

   void bag::insert(const value_type& entry) {
      if (used == capacity)
         reserve(used + 1);//when it hits the capacity, then reserve new one

      data[used] = entry;
      ++used;
   }

   void bag::operator +=(const bag& addend) {
      if (used + addend.used > capacity)
         reserve(used + addend.used);

      std::copy(addend.data, addend.data + addend.used, data + used);
      used += addend.used;
   }

   void bag::operator =(const bag& source) {
      value_type *new_data;
      //CHeck for possible self-assignment
      //this is pointing to the object that activates the function
      if (this == &source)
         return;

      if (capacity != source.capacity) {
         new_data = new value_type[source.capacity];
         delete[] data;
         data = new_data;
         capacity = source.capacity;
      }

      used = source.used;
      std::copy(source.data, source.data + source.used, new_data);
   }

   //CONSTANT MEMBER FUNCTIONS
   //size() is already defined in header file
   bag::size_type bag::count(const value_type& target) const {
      return 3;
   }

   //NON MEMBER FUNCTION
   bag operator +(const bag& b1, const bag& b2) {
      bag newBag(b1.size() + b2.size());

      newBag += b1;
      newBag += b2;
      return newBag;
   }
}
