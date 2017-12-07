/*
 * isBinaryTree.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <iostream>

using namespace std;

struct Node {
      int data;
      Node* left;
      Node* right;
};

bool helpCheckBST(Node* root, int low, int high){
	bool check = true;

	if (root == nullptr)
		return true;

	if((root->data > low) && (root->data < high))
		check = helpCheckBST(root->left, low, root->data);
	else
		return false;

	if(check)
		check = helpCheckBST(root->right, root->data, high);
	else
		return false;

	return check;
}

bool checkBST(Node* root) {
	bool check = true;
	if(root == nullptr)
		return true;
	if(root->left != nullptr)
		check = helpCheckBST(root->left, -32767, root->data);
	if((root->right != nullptr) && check)
		check = helpCheckBST(root->right, root->data, 32767);

	return check;
}

int main3(){
	Node * l3c1 = new Node();
	Node * l3c2 = new Node();
	Node * l3c3 = new Node();
	Node * l3c4 = new Node();
	Node * l2c1 = new Node();
	Node * l2c2 = new Node();
	Node * l1 = new Node();

	l3c1->data = 2;
	l3c2->data = 9;
	l3c3->data = 11;
	l3c4->data = 14;

	l2c1->data = 6;
	l2c2->data = 12;

	l1->data = 10;

	l2c1->right = l3c2;
	l2c1->left = l3c1;

	l2c2->left = l3c3;
	l2c2->right = l3c4;

	l1->right = l2c2;
	l1->left = l2c1;

	bool result = checkBST(l1);

	if(result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}


