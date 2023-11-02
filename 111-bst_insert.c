#include <stdlib.h>
#include "binary_trees.h"


/**
 * bst_insert - Inserts a value into a Binary Search Tree (BST).
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newnode;
	bst_t *current = *tree;
	bst_t *parent = NULL;

	while (current != NULL)
	{
		parent = current;
		if (value == current->n)
			return (NULL);
		else if (value < current->n)
			current = current->left;
		else
			current = current->right;
	}
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
		*tree = newnode;
	else if (value < parent->n)
		parent->left = newnode;
	else
		parent->right = newnode;
	return (newnode);
}
