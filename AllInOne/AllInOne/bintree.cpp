/*
bintree template file for bintree header
3 variables: Item data_field, left and right pointer to the node
*/

#include "bintree.h"
#include <cstdlib>
#include <iostream>


namespace hua_10
{
	//NON-MEMBER FUNCTIONS for the binary_tree_node<Item>:
	template class binary_tree_node<int>;

	template <class Item>
	binary_tree_node<Item>* tree_copy(const binary_tree_node<Item>* root_ptr)
		// Library facilities used: cstdlib
	{
		binary_tree_node<Item> *l_ptr;
		binary_tree_node<Item> *r_ptr;

		if (root_ptr == NULL)
		return NULL;
		else
		{
		l_ptr = tree_copy(root_ptr->left());
		r_ptr = tree_copy(root_ptr->right());
		return
		new binary_tree_node<Item>(root_ptr->data(), l_ptr, r_ptr);
		}
		//return new binary_tree_node<Item>(200);
	}

}