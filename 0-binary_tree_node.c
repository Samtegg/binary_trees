#include "binary_trees.h"

/**
 * binary_tree_node - This Creates binary tree node.
 * @parent: The pointer to
 * parent of the node to create.
 * @value: Value put in the new node.
 *
 * Return: This is If an error occurs
 * - NULL
 * therwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
