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

void nNode(int k, Node * root) {
	if(root == nullptr || k == 0)
		return;

	Node * ref1 = root;
	Node * ref2 = root;

	for(int i = 0; i < k; i++) {
		if (ref1 != nullptr)
			ref1 = ref1->next;
		else
			return;
	}

	while(ref1 != nullptr) {
		ref1 = ref1->next;
		ref2 = ref2->next;
	}

	std::cout << ref2->value << std::endl;
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


	nNode(2, &root);
}



