#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 *
 * @parent: pointer to node.
 * @value: pointer to node value.
 *
 * Return: binary tree node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));
	if (!n)
		return (NULL);
	n->parent = parent;
	n->n = value;
	n->left = NULL;
	n->right = NULL;
	return (n);
}
