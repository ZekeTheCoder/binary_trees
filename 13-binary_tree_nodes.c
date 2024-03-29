#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with at least 1 child
 * in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: Number of nodes, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			nodes += 1;
		}
		else
		{
			nodes += 0;
		}

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
