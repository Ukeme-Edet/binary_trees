#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: The depth of the node
 */
size_t binary_tree_depth(binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *curr = tree;

	while (curr && curr->parent)
	{
		depth++;
		curr = curr->parent;
	}
	return (depth);
}
