#include "binary_trees.h"

/**
 * binary_tree_size- function that measures the size of binary tree
 * @tree: is a pointer to the node to measure the size
 * Return: the size or NULL if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
