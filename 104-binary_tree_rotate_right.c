#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate.
 *
 * Return: Pointer to the new root node of the tree after the rotation.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	if (tree == NULL || tree->left == NULL)
		return (tree);
	newroot = tree->left;
	tree->left = newroot->right;
	if (newroot->right != NULL)
		newroot->right->parent = tree;
	newroot->right = tree;
	newroot->parent = tree->parent;
	tree->parent = newroot;

	return (newroot);
}
