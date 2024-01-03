#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child.
 * @tree: pointer to the root node of the tree.
 * Return: number of parent nodes. 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	else
	{
		parent = 1;
		if (tree->right != NULL)
			parent += binary_tree_nodes(tree->left);
		if (tree->left != NULL)
			parent += binary_tree_nodes(tree->left);
	}
	return (parent);
}
