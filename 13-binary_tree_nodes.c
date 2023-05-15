#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the nodes of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			height++;
			height += binary_tree_nodes(tree->left);
			height += binary_tree_nodes(tree->right);
		}
		return (height);
	}
	return (0);
}
