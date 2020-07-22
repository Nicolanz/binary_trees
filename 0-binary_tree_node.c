#include "binary_trees.h"
/**
 * binary_tree_node - creates new node for a tree
 * @parent: parent of the node
 * @value: value of the node
 * Return: newTreeNode or Null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode;

	newTreeNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newTreeNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newTreeNode->parent = parent;
		newTreeNode->n = value;
		return (newTreeNode);
	}
}
