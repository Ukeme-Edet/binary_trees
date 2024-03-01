#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *node;
	int depth, height;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	for (depth = 0; depth <= height; depth++)
	{
		node = (binary_tree_t *)tree;
		binary_tree_levelorder_helper(node, depth, func);
	}
}

/**
 * binary_tree_levelorder_helper - Traverses a binary tree using level-order
 * traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @depth: The depth of the tree to traverse
 * @func: A pointer to a function to call for each node
 */
void binary_tree_levelorder_helper(const binary_tree_t *tree, int depth,
								   void (*func)(int))
{
	if (!tree)
		return;
	if (depth == 0)
		func(tree->n);
	else
	{
		binary_tree_levelorder_helper(tree->left, depth - 1, func);
		binary_tree_levelorder_helper(tree->right, depth - 1, func);
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (MAX(left, right) + 1);
}
