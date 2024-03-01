#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nn = 0;

	if (!tree || !(tree->left || tree->right))
		return (0);
	tree->left ? nn += binary_tree_nodes(tree->left) : 0;
	tree->right ? nn += binary_tree_nodes(tree->right) : 0;
	return (nn + 1);
}
