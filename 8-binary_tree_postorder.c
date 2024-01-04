#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - use in-order traversal to traverse a binary tree
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
