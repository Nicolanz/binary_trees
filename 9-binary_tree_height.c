#include "binary_trees.h"
/**
 * countThis - counter
 * @tree: Node to the root
 * @counter: Varibale to count
 * Return: counter
 *
 */
size_t countThis(const binary_tree_t *tree, size_t counter)
{
	if (tree != NULL)
	{
		if (tree->left)
		{
			counter++;
		}
		countThis(tree->left, counter);
		if (tree->right)
		{
			counter++;
		}
		countThis(tree->right, counter);
	}
	return (counter);
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
	counter = countThis(tree, counter);
	return (counter);
}
