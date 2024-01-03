#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing, and if tree is NULL do nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}
	free(tree);
}