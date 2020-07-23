#include "binary_trees.h"
/**
 * countAllNodes - Counts all nodes of given tree
 * @tree: pointer to the root
 * Return: size
 *
 */
size_t countAllNodes(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree->left != NULL)
	{
		size += countAllNodes(tree->left);
	}
	if (tree->right != NULL)
	{
		size += countAllNodes(tree->right);
	}
	return (size);
}
/**
 * binary_tree_size - Gets the size of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: size or 0 if NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (size);
	}
	else
	{
		size = countAllNodes(tree);
		return (size);
	}
}
