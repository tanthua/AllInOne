/*
Implementation of string class, as a practice to undestand 
how standard string class is created
06/19/2016
Tan Hua
Private members needed:
-char *sequence
-size_t allocated;
-size_t current_length
*/

#include "mystring.h"
#include <iostream>
#include <cstdlib>

namespace hua_4
{
   //CONSTRUCTORS and DESTRUCTOR
   //intial constructor
   string::string(char str[]) {
      sequence = str;
   }

   //copy constructor
   string::string(const string& source) {

   }

   //destructor
   string::~string() {
      delete sequence;
   }

   //MODIFICATION MEMBER FUNCTIONS
   void string::operator +=(const string& addend) {

   }

   void string::operator +=(const char addend[]) {

   }

   void string::operator +=(char addend) {

   }

   void string::reserve(size_t n) {

   }

   void string::operator =(const string& source) {

   }

   //CONSTANT MEMBER FUNCTIONS
   //length() is in header file
   char string::operator [](size_t position) const {
      char a = 'a';
      return a;
   }

   //FRIEND FUNCTIONS

}