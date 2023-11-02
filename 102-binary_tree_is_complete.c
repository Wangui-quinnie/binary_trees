#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int not_complete = 0;
	int is_complete = 1;
	int front = 0, rear = 0;
	const binary_tree_t *current, *queue[10000];

	if (tree == NULL)
		return (0);
	queue[rear] = tree;
	rear++;
	while (front < rear)
	{
		current = queue[front];
		front++;
		if (current->left != NULL)
		{
			if (not_complete)
			{
				is_complete = 0;
				break;
			}
			queue[rear] = current->left;
			rear++;
		}
		else
			not_complete = 1;
		if (current->right != NULL)
		{
			if (not_complete)
			{
				is_complete = 0;
				break;
			}
			queue[rear] = current->right;
			rear++;
		}
		else
			not_complete = 1;
	}
	return (is_complete);
}
