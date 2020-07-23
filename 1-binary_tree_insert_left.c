#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts node to the left
 * @parent: parent of the node
 * @value: Value of the node
 * Return: newLeftNode or NULL
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftNode = binary_tree_node(parent, value);

	if (parent == NULL || newLeftNode == NULL)
	{
		free(newLeftNode);
		return (NULL);
	}
	else
	{
		if (parent->left == NULL)
		{
			parent->left = newLeftNode;
		}
		else
		{
			newLeftNode->left = parent->left;
			parent->left->parent = newLeftNode;
			parent->left = newLeftNode;
		}
		return (newLeftNode);
	}
}
