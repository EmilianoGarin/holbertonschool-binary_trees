#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			height += binary_tree_leaves(tree->left);
		if (tree->right)
			r_height += binary_tree_leaves(tree->right);
		if  (!tree->left && !tree->right)
			return (1);
		return (height + r_height);
	}
	return (0);
}
