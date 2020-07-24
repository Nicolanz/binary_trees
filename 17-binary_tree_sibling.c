#include "binary_trees.h"
/**
 * binary_tree_sibling - Gets the sibling of a node
 * @node: pointer to the node to compare
 * Return: sibling or Null if there is no children
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
	{
		return (sibling);
	}
	else if (node->parent->left == node)
	{
		sibling = node->parent->right;
		return (sibling);
	}
	else if (node->parent->right == node)
	{
		sibling = node->parent->left;
		return (sibling);
	}
	else
	{
		return (sibling);
	}
}
