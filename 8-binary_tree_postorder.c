#include "binary_trees.h"
/**
 * binary_tree_postorder - print elements of tree using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
	}
	func(tree->n);
}
