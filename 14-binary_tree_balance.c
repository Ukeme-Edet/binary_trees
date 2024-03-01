#include "binary_trees.h"

/**
 * binary_tree_height_e - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to be measured
 * Return: The height of the tree
 */
size_t binary_tree_height_e(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + MAX(binary_tree_height_e(tree->left),
					binary_tree_height_e(tree->right)));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointr to the root node of the tree to measure the balance factor
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_e(tree->left) - binary_tree_height_e(tree->right));
}
