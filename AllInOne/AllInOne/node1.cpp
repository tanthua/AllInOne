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
	   const node* search_ptr = head_ptr;
	   while (search_ptr != NULL) {
		   if (search_ptr->data() == target)
			   return search_ptr;

		   search_ptr = search_ptr->link();
	   }
	   return search_ptr;
   }
   node* list_locate(node* head_ptr, std::size_t position) {
      node* locate_ptr = head_ptr;
	  for (size_t i = 1; i < position; ++i) {
		  locate_ptr = locate_ptr->link();
	  }
      return locate_ptr;
   }
   const node* list_locate(const node* head_ptr, std::size_t position) {
	   const node* locate_ptr = head_ptr;
	   for (size_t i = 1; i <= position; ++i) {
		   locate_ptr = locate_ptr->link();
	   }
	   return locate_ptr;
   }
   void list_head_remove(node*& head_ptr) {
	   node* remove_ptr = head_ptr;
	   head_ptr = head_ptr->link();
	   delete remove_ptr;
   }
   void list_remove(node* previous_ptr) {
	   node* remove_ptr = previous_ptr->link();
	   previous_ptr->set_link(remove_ptr->link());
	   delete remove_ptr;
   }
   void list_clear(node*& head_ptr) {
	   node* clear_ptr = head_ptr;
	   while (clear_ptr != NULL) {
		   head_ptr = head_ptr->link();
		   delete clear_ptr;
		   clear_ptr = head_ptr;
	   }
   }
   void list_copy(const node* source_ptr, node*& head_ptr, node*& tail_ptr) {
	   //Create first node and point head and tail to it
	   head_ptr = new node(source_ptr->data());
	   tail_ptr = head_ptr;
	   source_ptr = source_ptr->link();
	   while (source_ptr != NULL) {
		   node* helper_ptr = new node(source_ptr->data());
		   tail_ptr->set_link(helper_ptr);
		   source_ptr = source_ptr->link();
		   tail_ptr = tail_ptr->link();
	   }
   }
}