#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor of the nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	ancestor = (binary_tree_t *)first;
	while (ancestor)
	{
		if (ancestor == second)
			return (ancestor);
		ancestor = ancestor->parent;
	}
	ancestor = (binary_tree_t *)second;
	while (ancestor)
	{
		if (ancestor == first)
			return (ancestor);
		ancestor = ancestor->parent;
	}
	ancestor = (binary_tree_t *)first;
	while (ancestor)
	{
		binary_tree_t *ancestor2 = (binary_tree_t *)second;

		while (ancestor2)
		{
			if (ancestor == ancestor2)
				return (ancestor);
			ancestor2 = ancestor2->parent;
		}
		ancestor = ancestor->parent;
	}
	return (NULL);
}
