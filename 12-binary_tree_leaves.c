#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: number of leaves or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return(1);
	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
