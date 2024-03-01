#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 *  the left-child of another node.
 *
 *  @parent: pointer to node parent.
 *  @value: value of lenft node.
 *
 *  Return: left node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (!parent)
		return (NULL);
	n = malloc(sizeof(binary_tree_t));
	if (!n)
		return (NULL);

	n->n = value;
	n->parent = parent;
	n->right = NULL;
	n->left = parent->left;
	parent->left = n;
	if (n->left)
		n->left->parent = n;
	return (n);
}
