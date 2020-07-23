#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through a B.Tree using post-order traversal
 * @tree: Pointer to the root
 * @func: Pointer function to print the value of node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
