#include "binary_trees.h"

/**
 * binary_tree_is_root - This Checks if node
 * is root of binary tree.
 * @node: A pointer to
 * the node to check.
 *
 * Return: If the node
 * a root - 1.
 * Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
