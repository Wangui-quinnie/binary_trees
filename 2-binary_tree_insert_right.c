#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure
 *or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);
	newnode->right = parent->right;
	if (newnode->right != NULL)
		newnode->right->parent = newnode;
	parent->right = newnode;

	return (newnode);
}
