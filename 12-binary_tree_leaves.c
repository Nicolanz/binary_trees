#include "binary_trees.h"
size_t i = 0;
/**
 * numberOfLeaves - Count number of leaves
 * @tree: Pointer to root
 * Return: i
 *
 */
size_t numberOfLeaves(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			i++;
		}
		numberOfLeaves(tree->left);
		numberOfLeaves(tree->right);
	}
	return (i);
}
/**
 * binary_tree_leaves - Gets the number of leaves
 * @tree: Pointer to root
 * Return: leaves or 0 if Null
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (leaves);
	}
	leaves = numberOfLeaves(tree);
	i = 0;
	return (leaves);
}
