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
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: is a pointer to the root
 * Return: return the height
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t height = 0, r_height = 0;

	if (tree)
	{
		height = binary_tree_leaves(tree->left);
		r_height = binary_tree_leaves(tree->right);
		if  (!tree->left && !tree->right)
			return (1);
		return (height + r_height);
	}
	return (0);
}

/**
 * pow_two - calculate 2 ^ x
 * @x: exponent
 * Return: 2 ^ x
 */

size_t pow_two(size_t x)
{
	if (x)
		return (2 * pow_two(x - 1));
	return (1);
}


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root
 * Return: 1 it's full, 0 it's not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		/*calcular con raiz cuadrada*/
		if (pow_two(binary_tree_height(tree) - 1) == binary_tree_leaves(tree))
			return (1);
	return (0);
}
