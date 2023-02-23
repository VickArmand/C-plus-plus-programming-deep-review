#include <iostream>
#include <stack>
#include <list>
using namespace std;
int breadthfirst(stack<int> tree, list<int> visited);
int main(int argc, char** argv)
{
	int nodesnum,root,node;
	cout<<"Enter the number of nodes"<<"\n";
	cin>>nodesnum;
	stack<int> tree;
	list<int> visited;
	//cout<<"Enter the root node"<<"\n";
	//cin>>root;
	//tree.push(root);
	//cout<<tree.top();
	cout<<"Enter the other nodes"<<"\n";
	for(int i=0;i<nodesnum;i++){
		cin>>node;
		tree.push(node);	
	}
	while(!tree.empty()){
		breadthfirst(tree,visited);
		
		
	}
	
	return 0;
}
int breadthfirst(stack<int> tree, list<int> visited){
	tree.pop();
	cout<<tree.top();
	visited.push_front(tree.top());
	cout<<visited.size();
	return breadthfirst(tree,visited);
}