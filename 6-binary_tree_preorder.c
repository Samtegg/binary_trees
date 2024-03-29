#include "binary_trees.h"

/**
 * binary_tree_preorder - This Goes through the binary
 * tree using pre-order traversal.
 * @tree: The pointer to the root
 * node of tree to traverse.
 * @func: The pointer to
 * function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

