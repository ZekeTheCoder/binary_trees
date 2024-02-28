#include "binary_trees.h"

/**
 * binary_tree_height - This function that measures the height of
 * a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_child = 0;
		size_t right_child = 0;

		if (tree->left)
			left_child = 1 + binary_tree_height(tree->left);
		else
			left_child = 0;

		if (tree->right)
			right_child = 1 + binary_tree_height(tree->right);
		else
			right_child = 0;

		if (left_child > right_child)
			return (left_child);
		else
			return (right_child);
	}

	return (0);
}
