#include "binary_trees.h"

/**
 * binary_tree_node - create a new node
 * @parent: parent node in the tree
 * @value: value to assign to node
 * Return: return a dress of the new node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);
	new_n->n = value;
	new_n->parent = parent;
	new_n->right = NULL;
	new_n->left = NULL;

	return (new_n);

}
