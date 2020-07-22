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
    if (parent == NULL)
    {
        return (NULL);
    }
	binary_tree_t *newLeftNode;

	newLeftNode = malloc(sizeof(binary_tree_t));
	if (newLeftNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newLeftNode->parent = parent;
		newLeftNode->n = value;
		if (parent->left == NULL)
		{
			parent->left = newLeftNode;
		}
		else
		{
			newLeftNode->left = binary_tree_node(newLeftNode, parent->left->n);
			parent->left = newLeftNode;
		}
	}
	return (newLeftNode);
}
