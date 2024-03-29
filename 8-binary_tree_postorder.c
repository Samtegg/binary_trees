#include "binary_trees.h"

/**
 * binary_tree_postorder - iT traverses a binary tree
 * using the post-order traversal.
 * @tree: The pointer to the root
 * node of tree to the traverse.
 * @func: The pointer to the
 * function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

