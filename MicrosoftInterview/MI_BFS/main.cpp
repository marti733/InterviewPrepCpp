/*
 * main.cpp
 *
 *  Created on: Oct 12, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

class Node{
public:
	char value;
	vector<Node> children;

	Node(char c){
		value = c;
	}

	void addChild(Node n){
		children.push_back(n);
		return;
	}

	void addChild(char n){
		Node foo(n);
		children.push_back(foo);
	}

	char getValue(){
		return value;
	}

	vector<Node> getChildren(){
		return children;
	}

	bool isLeaf(){
		return children.size()==0;
	}

	bool operator==(Node b){
		return b.value==value;
	}
};


void construct(Node *r)
{
	string foo;
	cout<<"Enter children for "<< r->getValue() <<" (-1 for leaf)"<<endl;
	cin>>foo;

	if(foo == "-1")
		return;
	else{
		for(int i = 0; i < foo.length(); i++)
		{
			Node t(foo[i]);
			construct(&t);

			r->addChild(t);
		}
	}
}

string breadthFirstSearch(Node root, Node goal)
{
	std::queue<Node> Q;
	std::vector<Node> children;
	string path = "";

	Q.push(root);

	while(!Q.empty())
	{
		Node t = Q.front();
		path += t.getValue();

		Q.pop();

		if(t == goal){
			return path;
		}
		children = t.getChildren();
		for (int i = 0; i < children.size(); ++i)
		{
			Q.push(children[i]);
		}
	}
	return path;
}

string depthFirstSearch(Node root, Node goal)
{
	std::stack<Node> Q;
	std::vector<Node> children;
	string path = "";

	Q.push(root);

	while(!Q.empty())
	{
		Node t = Q.top();
		path += t.getValue();

		Q.pop();

		if(t == goal){
			return path;
		}
		children = t.getChildren();
		std::reverse(children.begin(),children.end());

		for (int i = 0; i < children.size(); ++i){
			Q.push(children[i]);
		}
	}
	return path;
}

int main(int argc, char** argv) {
	Node root('J');
	Node a('A');
	Node b('B');
	Node c('C');
	Node e('E');
	Node f('F');
	Node g('G');
	Node l('L');
	Node m('M');
	Node n('N');
	Node q('Q');
	Node r('R');
	Node s('S');

	root.addChild(a);
	root.addChild(b);
	root.addChild(c);

	r.children[0].addChild(e);
	r.children[0].addChild(f);
	r.children[1].addChild(l);
	r.children[1].addChild(m);
	r.children[2].addChild(q);
	r.children[2].addChild(r);
	r.children[2].addChild(s);








	std::cout<<"BFS Traversal: "<<breadthFirstSearch(root, Node(' '))<<std::endl;
	std::cout<<"BFS Search Path: "<<breadthFirstSearch(root, Node('A'))<<std::endl<<std::endl;

	std::cout<<"DFS Traversal: "<<depthFirstSearch(root, Node(' '))<<std::endl;
	std::cout<<"DFS Search Path: "<<depthFirstSearch(root, Node('A'))<<std::endl;

	return 0;
}



