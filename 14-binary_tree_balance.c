#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Balance factor or 0 if the tree is empty.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right, height_left;

	if (tree == NULL)
		return (0);
	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	return (height_left - height_right);
}
