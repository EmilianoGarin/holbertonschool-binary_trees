#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return ((binary_tree_depth(tree->parent)) + 1);
	return (0);
}
