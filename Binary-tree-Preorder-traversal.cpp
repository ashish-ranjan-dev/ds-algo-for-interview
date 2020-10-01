/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* root)
{
	if (root == NULL)
		return;

	/* first print data of node */
	cout << root->data << " ";

	/* then recur on left sutree */
	printPreorder(root->left);

	/* now recur on right subtree */
	printPreorder(root->right);
}
