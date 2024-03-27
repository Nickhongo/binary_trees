#include "binary_trees.h"
/**
 * binary_tree_postorder- a function that goes through a binary tree using
 * post-order traversal
 * @tree: pointer to the root of the tree to traverse
 * @func: pointer to a function
 *
 * Return: tree, func or NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	func(tree->n);
	binary_tree_postorder(tree->right, func);
}