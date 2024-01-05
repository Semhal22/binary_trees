#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle of the node
 * or NULL if no node or no uncle
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;
	if (grandparent == NULL)
		return (NULL);
	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == node->parent)
			return (grandparent->right);
		return (grandparent->left);
	}
	return (NULL);
}
