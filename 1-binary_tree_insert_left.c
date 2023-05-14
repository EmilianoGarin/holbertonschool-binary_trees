#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a new node in the left
 * @parent: parent node in the tree
 * @value: value to assign to node
 * Return: return a dress of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL, *l_child = NULL;

	if (!parent)
		return (NULL);

	l_child = parent->left;

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->right = NULL;
	parent->left = new_n;

	if (!l_child)
		new_n->left = NULL;
	else
	{
		new_n->left = l_child;
		l_child->parent = new_n;

	}
	return (new_n);
}
