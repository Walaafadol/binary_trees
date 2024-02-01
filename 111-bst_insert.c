#include "binary_trees.h"
/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *tmp;
	binary_tree_t *auxx;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		auxx = binary_tree_node((binary_tree_t *)(*tree), value);
		new = (bst_t *)auxx;
		*tree = new;
	}
	else
	{
		temp = *tree;
		if (value < tmp->n)
		{
			if (tmp->left)
				new = bst_insert(&tmp->left, value);
			else
			{
				auxx = binary_tree_node((binary_tree_t *)tmp, value);
				new = tmp->left = (bst_t *)auxx;
			}
		}
		else if (value > tmp->n)
		{
			if (tmp->right)
				new = bst_insert(&tmp->right, value);
			else
			{
				auxx = binary_tree_node((binary_tree_t *)tmp, value);
				new = tmp->right = auxx;
			}
		}
		else
			return (NULL);
	}
	return (new);
}
