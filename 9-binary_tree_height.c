#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			height = (binary_tree_height(tree->left)) + 1;
		if (tree->right)
			r_height = (binary_tree_height(tree->right)) + 1;
		if (height < r_height)
			height = r_height;
		return (height);
	}
	return (0);
}