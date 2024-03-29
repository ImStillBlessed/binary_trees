#include "binary_trees.h"

/**
 * binary_tree_postorder - transverses a tree using in-order transversal
 * @tree: pointer to the root node of the tree.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: nothing.
 *
 * Description: if tree or func is NULL do nothing.
*/
void binary_tree_postorder(const binary_tree_t* tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
