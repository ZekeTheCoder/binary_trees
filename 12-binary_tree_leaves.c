#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves in tree, 0 if tree NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			leaves += 1;
		}
		else
		{
			leaves += 0;
		}

		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
