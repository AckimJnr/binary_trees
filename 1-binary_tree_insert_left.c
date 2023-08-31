#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as a left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: returns a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		tmp = parent->left;
		tmp->parent = new_node;
		parent->left = new_node;
		new_node->left = tmp;
	}

	return (new_node);

}
