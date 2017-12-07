/*
 * loopedLinkedList.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: cheyenne
 */
#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* next;
};

bool has_cycle(Node* head) {
	// Complete this function
    // Do not write the main method
    if(head == nullptr)
        return false;

    Node * curr = head;
    Node * chase = head->next;

    while((curr != nullptr) && (chase != nullptr)){
        if(chase == curr)
            return true;
        chase = chase->next;
        if(chase != nullptr)
            chase = chase->next;
        curr = curr->next;
    }

    return false;
}



