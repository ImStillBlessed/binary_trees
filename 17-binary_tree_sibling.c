#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node.
 * @node: pointer to the node to find sibling
 * Return: pointer to sibling node. else NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
