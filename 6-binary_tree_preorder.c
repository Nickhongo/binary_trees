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
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
