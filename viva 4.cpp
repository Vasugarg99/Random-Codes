#include<iostream>
using namespace std;

struct Node
 {
	char data;
	struct Node *left;
	struct Node *right;
};
void Inorder(Node *root)
{
	if(root == NULL)
	return;
	Inorder(root->left);
	cout<<("%c",root->data);
	Inorder(root->right);
}
Node* Insert(Node *root,char data)
{
	if(root == NULL)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main()
{
	Node* root = NULL;
	root=Insert(root,'5');
	root=Insert(root,'7');
	root=Insert(root,'0');
	root=Insert(root,'6');
	root=Insert(root,'3');
	root=Insert(root,'1');
	cout<<"Inorder\n ";
	Inorder(root);
	cout<<"\n";
}
