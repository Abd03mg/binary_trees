#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 *  the right-child of another node.
 *
 *  @parent: pointer to node parent.
 *  @value: value of right node.
 *
 *  Return: node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (!parent)
		return (NULL);
	n = malloc(sizeof(binary_tree_t));
	if (!n)
		return (NULL);

	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = parent->right;
	parent->right = n;
	if (n->right)
		n->right->parent = n;
	return (n);
}
