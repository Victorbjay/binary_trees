#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - traverses a binary tree in pre-order
 * @tree: pointer to the root of the tree.
 * @func: pointer to the function to call on each node.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
