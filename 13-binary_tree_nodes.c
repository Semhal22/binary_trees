#include "binary_trees.h"

/**
 * binary_tree_nodes- function that counts nodes with at least one child
 * @tree: is a pointer to the root node to count number of nodes
 * Return: the number of nodes or NULL if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
