#include "binary_trees.h"
int check_height(const binary_tree_t* tree);

/**
 * binary_tree_balance - checks the balance of a tree
 * @tree: pointer to root node of the tree.
 * Return: the balance int.
 * Description:
 * balance is the height of left tree - height of roght tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	left = check_height(tree->left);
	right = check_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, If tree is NULL, your function must return 0.
*/

int check_height(const binary_tree_t* tree)
{
	int right = 0;
	int left = 0;

	if (tree == NULL)
		return (0);
	left += check_height(tree->left);
	right += check_height(tree->right);
	return (right > left ? right + 1 : left + 1);
}
