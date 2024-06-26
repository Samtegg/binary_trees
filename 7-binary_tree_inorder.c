#include "binary_trees.h"

/**
 * binary_tree_inorder - This goes through a
 * binary tree using the
 * in-order traversal.
 * @tree: The pointe the root
 * node of the tree to traverse.
 * @func: The pointer to function
 * to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

