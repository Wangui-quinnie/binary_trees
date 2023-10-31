#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child.
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure or
 * if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);
	newnode->left = parent->left;
	if (newnode->left != NULL)
		newnode->left->parent = newnode;
	parent->left = newnode;

	return (newnode);
}
