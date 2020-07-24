#include "binary_trees.h"
/**
 * checkIfFull - Checks if node is full
 * @tree: pointer to root
 * Return: 0 or 1
 *
 */
int checkIfFull(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL || tree->right == NULL)
		{
			return (0);
		}
		checkIfFull(tree->left);
		checkIfFull(tree->right);
		return (1);
	}
	else
	{
		return (1);
	}
}
/**
 * binary_tree_is_full - Checks if node is full
 * @tree: pointer to node
 * Return: 0 or 1
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isfull = 0;

	if (tree == NULL)
	{
		return (isfull);
	}
	else
	{
		isfull = checkIfFull(tree);
		return (isfull);
	}
}
