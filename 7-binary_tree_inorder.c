#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - use in-order traversal to traverse a binary tree
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
