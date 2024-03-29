#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a 
 * node in a binary tree.
 * @tree: The pointer to the node
 * to measure the depth.
 *
 * Return: If then tree is NULL, your function
 * must then return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

