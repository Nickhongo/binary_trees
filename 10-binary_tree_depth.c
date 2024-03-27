#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a binary tree
 * @tree: pointer to the root of the tree to measure the height
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *parent;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		parent = tree->parent;
		tree = parent;
	}

	return (depth);
}
