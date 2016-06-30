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

	template <class Item, class SizeType>
	void print(binary_tree_node<Item>* node_ptr, SizeType depth) {

	}

	template <class Item>
	void tree_clear(binary_tree_node<Item>* root_ptr) {
		binary_tree_node<Item>* child;

		if (root_ptr != NULL) {
			child = root_ptr->left();
			tree_clear(child);
			child = root_ptr->right();
			tree_clear(child);
			delete root_ptr;
			root_ptr = NULL;
		}
	}

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
			return new binary_tree_node<Item>(root_ptr->data(), l_ptr, r_ptr);
		}
		//return new binary_tree_node<Item>(200);
	}

	template <class Process, class BTNode>
	void inorder(Process f, BTNode* node_ptr) {
		if (node_ptr != NULL) {
			inorder(f, node_ptr->left());
			f(node_ptr->data());
			inorder(f, node_ptr->right());
		}
	}

	template <class Process, class BTNode>
	void prorder(Process f, BTNode* node_ptr) {
		if (node_ptr != NULL) {
			f(node_ptr->data());
			preorder(f, node_ptr->left());
			preorder(f, node_ptr->right());
		}
	}

	template <class Process, class BTNode>
	void postorder(Process f, BTNode* node_ptr) {
		if (node_ptr != NULL) {
			preorder(f, node_ptr->left());
			preorder(f, node_ptr->right());
			f(node_ptr->data());
		}
	}
}