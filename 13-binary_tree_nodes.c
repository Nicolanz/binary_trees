#include "binary_trees.h"
size_t i = 0;
/**
 * numberNodes - Return the num of nodes
 * @tree: pointer to the root
 * Return: i
 *
 */
size_t numberNodes(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			i++;
		}
		numberNodes(tree->left);
		numberNodes(tree->right);
	}
	return (i);
}
/**
 * binary_tree_nodes - Gets the node which have no childs
 * @tree: Pointer to root
 * Return: size or 0 if NULL
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (size);
	}
	size = numberNodes(tree);
	i = 0;
	return (size);
}
