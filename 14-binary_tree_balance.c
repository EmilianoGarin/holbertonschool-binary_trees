#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 1, r_height = 1;

	if (tree)
	{
		height += binary_tree_height(tree->left);
		r_height += binary_tree_height(tree->right);
		if (height < r_height)
			height = r_height;
		return (height);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root
 * Return: positib if left > right, negative if left < right and 0 is balance
 * or no tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
