#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!(node && node->parent))
		return (NULL);
	return (
		node->parent->left == node ? node->parent->right : node->parent->left);
}
