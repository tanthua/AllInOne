/*
Implementation of string class, as a practice to undestand 
how standard string class is created
06/19/2016
Tan Hua
C-string functions needed:
-strcmp, strcpy, strlen, strcat
Private members needed:
-char *sequence
-size_t allocated; always equals greater than current_length
-size_t current_length
*/

#include "mystring.h"
#include <iostream>
#include <cstdlib>

namespace hua_4
{
   //CONSTRUCTORS and DESTRUCTOR
   //intial constructor
   string::string(const char str[]) {
      current_length = strlen(str);
      allocated = current_length + 1;
      sequence = new char[allocated];
      strcpy(sequence, str);
   }

   //copy constructor
   string::string(const string& source) {
      current_length = source.length();
      sequence = new char[current_length + 1];
      strcpy(sequence, source.sequence);
      allocated = source.allocated;
   }

   //destructor
   string::~string() {
      delete[] sequence;
   }

   //MODIFICATION MEMBER FUNCTIONS
   void string::operator +=(const string& addend) {
      current_length = current_length + addend.length();
      allocated = current_length + 1;
      char* new_sequence = new char[allocated];
      strcpy(new_sequence, "");
      strcat(new_sequence, sequence);
      strcat(new_sequence, addend.sequence);
      delete[] sequence;
      sequence = new_sequence;

      //TODO: figure out what allocated is for
   }

   void string::operator +=(const char addend[]) {

      const string& addend_string(addend);
      current_length = current_length + addend_string.length();
      allocated = current_length + 1;
      char* new_sequence = new char[allocated];
      strcpy(new_sequence, "");
      strcat(new_sequence, sequence);
      strcat(new_sequence, addend_string.sequence);
      delete[] sequence;
      sequence = new_sequence;

   }

   void string::operator +=(char addend) {
      //
      //sequence[current_length] = addend;
      current_length = current_length + 1;
      allocated = current_length + 1;
      char* new_sequence = new char[allocated];
      strcpy(new_sequence, "");

      std::cout << "sequence vs new_sequence before cat\n";
      for (int i = 0; i <= current_length; ++i) {
         std::cout << sequence[i] << " vs " << new_sequence[i] << "\n";
      }

      strcat(new_sequence, sequence);
      new_sequence[current_length] = addend;
      std::cout << "sequence vs new_sequence after cat\n";
      for (int i = 0; i <= current_length; ++i) {
         std::cout << sequence[i] << " vs " << new_sequence[i] << "\n";
      }

      //new_sequence[current_length] = addend;

      delete[] sequence;
      sequence = new_sequence;
      //TODO: length is not correct, allocated is untouched
   }

   void string::reserve(size_t n) {

   }

   void string::operator =(const string& source) {
      delete[] sequence;
      current_length = source.current_length;
      allocated = current_length + 1;
      sequence = new char[allocated];
      strcpy(sequence, source.sequence);
   }

   //CONSTANT MEMBER FUNCTIONS
   //length() is in header file
   char string::operator [](size_t position) const {
      return sequence[position];
   }

   void string::print_string() const {
      char* sequence_ = sequence;
      for (int i = 0; i < length(); ++i) {
         std::cout << sequence_[i];
      }
      std::cout << std::endl;
   }
   //FRIEND FUNCTIONS
   //Not a member function, but has access to private members
   //Not activated by a particular object

}