#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as a right child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: returns a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);

}
