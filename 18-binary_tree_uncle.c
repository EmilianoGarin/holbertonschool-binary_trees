#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the root
 * Return: return a pointer to the sibling node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
