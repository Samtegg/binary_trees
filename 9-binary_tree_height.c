#include "binary_trees.h"

/**
 * binary_tree_height - This Measures the height
 * of the binary tree.
 * @tree: The pointer to the root node of
 * tree to measure the height.
 *
 * Return: If the tree is NULL, then your
 * function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

