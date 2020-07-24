#include "binary_trees.h"
/**
 * getHeight - Gets height of a tree
 * @tree: Pointer to node
 * Return: right or left
 *
 */
int getHeight(const binary_tree_t *tree)
{
	int right = 1;
	int left = 1;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left += getHeight(tree->left);
		right += getHeight(tree->right);
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
 * binary_tree_balance - Gets the balance of a tree
 * @tree: Pointer to root
 *
 * Return: Balance or 0 if Null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int heightLeft = 0;
	int heightRight = 0;

	if (tree == NULL)
	{
		return (balance);
	}
	else
	{
		heightLeft = (getHeight(tree->left) - 1);
		heightRight = (getHeight(tree->right) - 1);
		balance = heightLeft - heightRight;
		return (balance);
	}
}
