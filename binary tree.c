#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#define size 10000

typedef struct {
	int data;
	struct Node* left;
	struct Node* right;
}Node;
Node* initNode(int data,Node* left, Node* right)
{
	Node* node = malloc(sizeof(Node));
	node->data = data;
	node->left = left;
	node->right = right;
	return node;
}
preorder(Node* node)
{
	if (node)
	{
		printf("%d ", node->data);
		preorder(node->left);
		preorder(node->right);
	}
}
inorder(Node* node)
{
	if (node)
	{
		inorder(node->left);
		printf("%d ", node->data);
		inorder(node->right);
	}
}
postorder(Node* node)
{
	if (node)
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d ", node->data);
	}
}
main()
{
	Node* n7 = initNode(50, NULL, NULL);
	Node* n6 = initNode(37, NULL, NULL);
	Node* n5 = initNode(23, NULL, NULL);
	Node* n4 = initNode(5, NULL, NULL);
	Node* n3 = initNode(48, n6, n7);
	Node* n2 = initNode(17, n4, n5);
	Node* n1 = initNode(30, n2, n3);
	preorder(n1);
	printf("\n");
	inorder(n1);
	printf("\n");
	postorder(n1);

}