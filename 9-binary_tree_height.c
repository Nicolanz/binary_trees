#include "binary_trees.h"
/**
 * countThis - counter
 * @tree: Node to the root
 * Return: counter
 *
 */
size_t countThis(const binary_tree_t *tree)
{
	size_t right = 1;
	size_t left = 1;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		right += countThis(tree->left);
		left += countThis(tree->right);
	}
	if (right >= left)
	{
		return (right);
	}
	else
	{
		return (left);
	}
}
/**
 * binary_tree_height - Counts the height of a tree
 * @tree: Pointer to the root node
 * Return: counter or 0 if null
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
	{
		return (0);
	}
	counter = countThis(tree);
	counter--;
	return (counter);
}
