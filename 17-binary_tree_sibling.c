#include "binary_trees.h"

/**
 * binary_tree_sibling - This function Finds sibling of a node.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling or NUll if otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
