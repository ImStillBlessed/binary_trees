#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, If tree is NULL, your function must return 0.
*/

size_t binary_tree_height(const binary_tree_t* tree)
{
	size_t height = 0;

	if (tree->left != NULL)
	{
		height += 1;
		height += binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		height += 1;
		height += binary_tree_height(tree->right);
	}
	return (height / 2);
}