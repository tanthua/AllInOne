#include "poly1.h"
#include <iostream>
#include <cstdlib>

using namespace std;
namespace hua_4
{
   //CONSTRUCTORS and DESTRUCTOR
   //constructor, copy constructor
   polynomial::polynomial() {
      current_array_size = 10;
      coef = new double[current_array_size];
      for (int i = 0; i < current_array_size; ++i) {
         coef[i] = 0;
      }
   }

   polynomial::polynomial(const polynomial& source) {

   }

   polynomial::polynomial(double c, unsigned int exponent) {

   }

   //destructor
   polynomial::~polynomial() {

   }

   //MODIFICATION MEMBER FUNCTIONS
   void polynomial::add_to_coef(double amount, unsigned int exponent) {

   }

   void polynomial::assign_coef(double coefficient, unsigned int exponent) {

   }

   void polynomial::clear() {

   }

   void polynomial::reserve(size_t number) {

   }

   void polynomial::trim() {

   }
   // CONSTANT MEMBER FUNCTIONS
   void polynomial::print() const {
      for (int i = 0; i < current_array_size; ++i) {
         std::cout << coef[i] << " ";
      }
      std::cout << std::endl;
   }
 //  //MODIFICATION OPERATORS
 //  polynomial& polynomial::operator =(const polynomial& source) {

 //  }

 ///*  polynomial& polynomial::operator =(double c) {

 //  }*/
 //  polynomial& polynomial::operator +=(const polynomial& p) {

 //  }

 //  //polynomial& polynomial::operator +=(double c) {

 //  //}

 //  polynomial& polynomial::operator *=(const polynomial& p) {

 //  }

 //  polynomial& polynomial::operator *=(double c) {

 //  }

 //  // NON-MEMBER INPUT/OUTPUT FUNCTIONS
 //  istream& operator >> (istream& in, polynomial& p) {

 //  }

 //  ostream& operator << (ostream& out, const polynomial& p) {

 //  }
}