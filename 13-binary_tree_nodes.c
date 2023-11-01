#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_nodes - Counts the nodes with at least one child.
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: Number of nodes with at least one child, or 0 if the
 * tree is empty (NULL).
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
