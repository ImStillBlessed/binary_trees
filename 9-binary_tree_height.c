#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, If tree is NULL, your function must return 0.
*/

size_t binary_tree_height(const binary_tree_t* tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0)
	if (tree->left != NULL)
	{
		left += binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right += binary_tree_height(tree->right) + 1;
	}
	if (right > left)
		return (right);
	return (left);
}
