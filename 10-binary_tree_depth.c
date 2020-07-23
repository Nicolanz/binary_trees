#include "binary_trees.h"
/**
 * binary_tree_depth - Gets the depht of a node
 * @tree: node to check
 * Return: depth or 0 if NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depht = 0;

	if (tree == NULL)
	{
		return (depht);
	}
	else
	{
		while (tree->parent != NULL)
		{
			tree = tree->parent;
			depht++;
		}
		return (depht);
	}
}
