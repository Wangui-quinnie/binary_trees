#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate.
 *
 * Return: Pointer to the new root node of the tree after the rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	newroot = tree->right;
	tree->right = newroot->left;
	if (newroot->left != NULL)
		newroot->left->parent = tree;
	newroot->left = tree;
	newroot->parent = tree->parent;
	tree->parent = newroot;

	return (newroot);
}
