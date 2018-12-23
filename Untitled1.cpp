#include <iostream>
using namespace std;
struct node
{
	char info;
	node * left;
	node * right;
};
node *getnode()
{
	node*first;
	first = new struct node;
	return first;
}
void Preorder(node* tree)
{
	if(tree)
	{
		cout << tree->info;
		Preorder(tree->left);
		Preorder(tree->right);
		
	}
}
int main()
{
	node* B=getnode();
	B->info='b';
	
	
	node* C=getnode();
	C->info='c';
	C->left = NULL;
	C->right = NULL;
	B->left = C;

	
	node* A= getnode();
	A->info='a';
	A->left = NULL;
	A->right = NULL;
	B->right = A;
	
	
	Preorder(B);
	
}
