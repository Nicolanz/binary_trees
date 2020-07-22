#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if node is a root of a binary tree
 * @node: node to check
 * Return: 1 if it is a root or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
