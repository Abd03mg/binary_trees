#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that check if a node is leaf.
 *
 * @node: node to be checken.
 *
 * Return: 1 if leaf, 0 otherwie.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if ((node->right) || (node->left))
		return (0);
	return (1);
}
