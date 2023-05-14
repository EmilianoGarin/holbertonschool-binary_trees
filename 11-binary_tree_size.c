#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			height =+ binary_tree_size(tree->left);
		if (tree->right)
			r_height =+ binary_tree_size(tree->right);
		return (height + r_height + 1);
	}
	return (0);
}
