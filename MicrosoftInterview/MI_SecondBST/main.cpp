/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */


#include <iostream>

class BinaryTreeNode
{
public:
    int value_;
    BinaryTreeNode* left_;
    BinaryTreeNode* right_;

    BinaryTreeNode(int value) :
        value_(value),
        left_(nullptr),
        right_(nullptr)
    {
    }

    ~BinaryTreeNode()
    {
        delete left_;
        delete right_;
    }

    BinaryTreeNode * insertLeft(int value)
    {
        this->left_ = new BinaryTreeNode(value);
        return this->left_;
    }

    BinaryTreeNode * insertRight(int value)
    {
        this->right_ = new BinaryTreeNode(value);
        return this->right_;
    }

    bool isBalanced(BinaryTreeNode& root) {
    		int rightDepth = minRight(root.right_);
    		int leftDepth = minLeft(root.left_);

    		std::cout << rightDepth << std::endl;
    		std::cout << leftDepth << std::endl;
    		int diff = abs(rightDepth - leftDepth);

    		if (diff < 2)
    			return true;
    		return false;
    }

    int minLeft(BinaryTreeNode *root){
    		if(root == nullptr)
    	    		return 0;
    	    	if((root->left_ == nullptr) & (root->left_ == nullptr))
    	    	    	return 1;

    		return minRight(root->right_) + minLeft(root->left_);
    }

    int minRight(BinaryTreeNode *root) {
    		if(root == nullptr)
    			return 0;
    		if((root->left_ == nullptr) & (root->left_ == nullptr))
    	    		return 1;

    	    	return minLeft(root->left_) + minRight(root->right_);

    }

    bool isBinary(BinaryTreeNode* root) {
        	if(root == nullptr)
        		return true;

        	if (root->left_ != nullptr) {
        		if (root->left_->value_ > root->value_)
        			return false;
        	}
        	if (root->right_ != nullptr) {
        		if (root->right_->value_ < root->value_)
        			return false;
        	}
        	return isBinary(root->left_) & isBinary(root->right_);
    }

    void findSecondLargest(BinaryTreeNode root) {
    		int c = 0;
    		secondLargestHelper(&root, c);
    }

    void secondLargestHelper(BinaryTreeNode *root, int &c) {
    		if(root == nullptr || c >= 2)
    			return;

    		secondLargestHelper(root->right_, c);
    		c++;

    		if(c == 2){
    			std::cout << "The second largest value is: " << root->value_ << std::endl;
    			return;
    		}

    		secondLargestHelper(root->left_, c);
    }
};

int main( int argc, char ** argv){
	BinaryTreeNode tree(6);
	BinaryTreeNode *left = tree.insertLeft(3);
	left->insertLeft(1);
	left->insertRight(4);
	BinaryTreeNode *right = tree.insertRight(4);
	right->insertLeft(9);
	right->insertRight(12);

	tree.findSecondLargest(*right);
	return 0;
}




