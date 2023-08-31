#include "binary_trees.h"
/**
 * binary_tree_node - creates a node of a binary tree
 * @parent: parent of the node created
 * @value: data of the node to be created
 *
 * Return: Returns the pointer to the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);

}
