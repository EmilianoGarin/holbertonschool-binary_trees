#include "binary_trees.h"

/**
 * binary_tree_postorder -goes through a binary tree using post-order traversal
 * @tree: is a pointer to the root
 * @func: is a pointer to the funtion
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
