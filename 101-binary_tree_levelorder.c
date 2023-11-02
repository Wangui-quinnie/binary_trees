#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"


/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * If tree or func is NULL, the function does nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *current, *queue[10000];
	int front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	queue[rear] = (binary_tree_t *)tree;
	rear++;


	while (front < rear)
	{
		current = queue[front];
		front++;
		func(current->n);

		if (current->left != NULL)
		{
			queue[rear] = current->left;
			rear++;
		}
		if (current->right != NULL)
		{
			queue[rear] = current->right;
			rear++;
		}
	}
}
