#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function  all for each node
 *
 * Return: tree, func or NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
