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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || !(tree->left == tree->right || (tree->left && tree->right)))
		return (0);
	if (tree->left)
		return (1 && binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right) &&
				binary_tree_balance(tree) == 0);
	return (1);
}
