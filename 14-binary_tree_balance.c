#include "binary_trees.h"
/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: is a pointer to the root node
 * Return: balance factor or NULL if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
