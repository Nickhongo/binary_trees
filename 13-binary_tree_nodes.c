#include "binary_trees.h"
/**
 * binary_tree_nodes - measures number of nodes in a binary tree
 * @tree: pointer to the root of the tree to measure the height
 *
 * Return: 0 or number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	
	if (tree->left || tree->right)
		return (left + right + 1);
	return (left + right);
}
