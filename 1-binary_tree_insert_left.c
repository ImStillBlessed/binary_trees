#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 *
 * description: If parent already has a left-child,
 * the new node must take its place, and the old
 * left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *node;

    if (parent == NULL)
        return (NULL);
    node = NULL;
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->parent = parent;
    if (parent->left != NULL)
        node = parent->left;
    parent->left = new_node;
    new_node->n = value;
    new_node->left = node;
    new_node->right = NULL;

    return (new_node);
}