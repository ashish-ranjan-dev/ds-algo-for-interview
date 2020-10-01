/* Given a binary tree, print its nodes in postorder*/
void printPostorder(struct Node* root)
{
	if (root == NULL)
		return;

	/* recur on left sutree */
	printPostorder(root->left);

	/* now recur on right subtree */
	printPostorder(root->right);

	/* then print data of node */
	cout << root->data << " ";
}
