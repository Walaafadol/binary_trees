#include "binary_trees.h"
/**
 * binary_tree_is_bst - says if a tree is a bst or not
 * the process here is first verify that the left node be smaller than the root
 * then verify if the right node is bigger than th root.
 * after that verify if the left subtree has nodes smaller than root
 * and the right subtree has bigger nodes than root
 * @tree: node that point to the tree to check
 * Return: 1 if it is a BST or 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int var = 0, left = 2, right = 2;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n < tree->n)
		return (0);
}
