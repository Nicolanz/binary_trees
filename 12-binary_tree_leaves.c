#include "binary_trees.h"
/**
 * binary_tree_leaves - Gets the number of leaves
 * @tree: Pointer to root
 * Return: leaves or 0 if Null
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree != NULL)
		{
			if (tree->left == NULL && tree->right == NULL)
			{
				return (1);
			}
			count += binary_tree_leaves(tree->left);
			count += binary_tree_leaves(tree->right);
		}
		return (count);
	}
}
