#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: niece of the incle
 * Return: uncle of null if not exists
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (uncle);
	}
	else if (node->parent->parent->left == node->parent)
	{
		uncle = node->parent->parent->right;
		return (uncle);
	}
	else if (node->parent->parent->right == node->parent)
	{
		uncle = node->parent->parent->left;
		return (uncle);
	}
	else
	{
		return (uncle);
	}
}
