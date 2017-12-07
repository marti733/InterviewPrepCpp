/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node * next;

	Node(int val) : value(val), next(nullptr) {}

	void printNode(Node * root) {
		Node * curr = root;

		while(curr != nullptr) {
			std::cout << curr->value << std::endl;
			curr = curr->next;
		}
	}

};

Node * reverseNodes(Node * root) {
	Node * prev = nullptr;
	Node * curr = root;
	Node * next = root->next;

	while(curr != nullptr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;

}

int main(int arc, char ** argv) {
	Node root(1);
	Node a(2);
	Node b(3);
	Node c(4);
	Node d(5);
	Node e(6);

	d.next = &e;
	c.next = &d;
	b.next = &c;
	a.next = &b;
	root.next = &a;


	Node * newRoot = reverseNodes(&root);
	newRoot->printNode(newRoot);

}


