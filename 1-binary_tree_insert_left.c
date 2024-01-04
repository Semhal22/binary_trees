#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 *
 * Return: pointer to the new node or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
		return (NULL);

	if (parent->left)
	{
		new_left->left = parent->left;
		new_left->left->parent = new_left;
	}

	parent->left = new_left;

	return (new_left);
}
