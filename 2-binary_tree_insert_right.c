#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL.
 *
 * Description:
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *node;

	node = NULL;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	if (parent->right != NULL)
		node = parent->right;z
	parent->right = new_node;
	new_node->left = NULL;
	new_node->right = node;
	new_node->n = value;

	return (new_node);
}