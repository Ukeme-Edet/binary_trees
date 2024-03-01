#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to be measured
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || !(tree->left || tree->right))
		return (0);
	return (1 + MAX(binary_tree_height(tree->left),
					binary_tree_height(tree->right)));
}
