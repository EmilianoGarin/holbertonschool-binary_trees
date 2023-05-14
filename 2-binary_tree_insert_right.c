#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a new node in the right
 * @parent: parent node in the tree
 * @value: value to assign to node
 * Return: return a dress of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL, *r_child = NULL;

	if (!parent)
		return (NULL);

	r_child = parent->right;

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	parent->right = new_n;

	if (!r_child)
		new_n->right = NULL;
	else
	{
		new_n->right = r_child;
		r_child->parent = new_n;

	}
	return (new_n);
}
