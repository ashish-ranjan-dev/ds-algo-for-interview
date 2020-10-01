//structure of treeNode

struct Node {
	char data;
	Node *left;
	Node *right;
};

// Function to print Nodes in a binary tree in Level order
void LevelOrder(Node *root) 
{
	if(root == NULL) return;

	queue<Node*> Q;
	Q.push(root);  
	
	//while there is at least one discovered node
	while(!Q.empty()) 
	{
		Node* current = Q.front();
		Q.pop(); // removing the element at front

		//print current node		
		cout<<current->data<<" ";

		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}
