#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert node to the right
 * @parent: parent of the node
 * @value: value of the node
 * Return: newRightNode or NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newRightNode = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = newRightNode;
	}
	else
	{
		newRightNode->right = parent->right;
		parent->right = newRightNode;
	}
	return (newRightNode);
}
