#include "binary_trees.h"
/**
 * binary_tree_balance- a function that measures the balance factor of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)find_height(tree->left);
	right_height = (int)find_height(tree->right);

	return (left_height - right_height);
}
