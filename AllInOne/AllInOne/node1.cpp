#include "node1.h"
#include <iostream>
#include <cstdlib>

namespace hua_5
{
   // FUNCTIONS for the linked list toolkit
   std::size_t list_length(const node* head_ptr) {
	   std::size_t count = 0;
	   const node* temp_ptr = head_ptr;
	   while (temp_ptr != NULL) {
		   ++count;
		   temp_ptr = temp_ptr->link();
	   }
	   return count;
   }

   void list_head_insert(node*& head_ptr, const node::value_type& entry) {
	   head_ptr = new node(entry, head_ptr);
   }

   void list_insert(node* previous_ptr, const node::value_type& entry) {
	   node* insert_ptr = new node(entry);
	   insert_ptr->set_link(previous_ptr->link());
	   previous_ptr->set_link(insert_ptr);
   }

   node* list_search(node* head_ptr, const node::value_type& target) {
      node* search_ptr = head_ptr;
	  while (search_ptr != NULL) {
		  if (search_ptr->data() == target)
			  return search_ptr;

		  search_ptr = search_ptr->link();
	  }
      return search_ptr;
   }
   const node* list_search
   (const node* head_ptr, const node::value_type& target) {
      node* a;
      return a;
   }
   node* list_locate(node* head_ptr, std::size_t position) {
      node* a;
      return a;
   }
   const node* list_locate(const node* head_ptr, std::size_t position) {
      node* a;
      return a;
   }
   void list_head_remove(node*& head_ptr) {

   }
   void list_remove(node* previous_ptr) {

   }
   void list_clear(node*& head_ptr) {

   }
   void list_copy(const node* source_ptr, node*& head_ptr, node*& tail_ptr) {

   }
}