#include <iostream>
using namespace std;

class BinaryTree;
class Node{
	int data;
	Node* left;
	Node* right;
public:
	Node(){
		data = 0;
		left = NULL;
		right = NULL;
	}
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
	friend class BinaryTree;
};

class BinaryTree{
	Node* root;
public:
	BinaryTree(){
		root = NULL;
	}
	void createNode(int val);
	void printNode();
	void inOrder(Node* node);
	void preOrder(Node* node);
	void postOrder(Node* node);
	Node* deleteNode(Node* node,int key);
	void deletion(int key){
		root = deleteNode(root, key);
	}
};

void BinaryTree::postOrder(Node* node){
	 if (node == NULL){
	        return;
	 }
	 postOrder(node->left);
	 postOrder(node->right);
	 cout<<node->data<<",";
}

void BinaryTree::preOrder(Node* node){
	 if (node == NULL){
	        return;
	 }
	 cout<<node->data<<",";
	 preOrder(node->left);
	 preOrder(node->right);
}

void BinaryTree::inOrder(Node* node){
	 if (node == NULL){
	        return;
	 }
	 inOrder(node->left);
	 cout<<node->data<<",";
	 inOrder(node->right);
}

void BinaryTree::printNode(){
	cout<<"In-Order"<<endl;
	inOrder(root);
	cout<<"\nPre-Order"<<endl;
	preOrder(root);
	cout<<"\nPost-Order"<<endl;
	postOrder(root);
	cout<<endl;
}

void BinaryTree::createNode(int val){
	Node* newNode = new Node(val);
	if (root==NULL){
		root = newNode;
		return;
	}
	Node* temp = root;
	while (true){
		if(val<temp->data){
			if(temp->left==NULL){
				temp->left = newNode;
				break;
			}
			else{
				temp = temp->left;
			}
		}
		else {
			if(temp->right==NULL){
				temp->right = newNode;
				break;
			}
			else{
				temp = temp->right;
			}
		}
	}

}

Node* BinaryTree::deleteNode(Node* node,int key){
	if (node==NULL){
		return NULL;
	}
	else if(key>node->data){
		node->right=deleteNode(node->right, key);
		return node;
	}
	else if(key<node->data){
		node->left=deleteNode(node->left, key);
		return node;
	}
	else{
		if (node->left ==NULL){
			Node* temp = node->right;
			delete node;
			return temp;
		}
		else if (root->right == NULL){
			Node* temp = node->left;
			delete node;
			return temp;
		}
		else {
			Node* succParent = node;
			Node* succ = node->right;
			while (succ->left != NULL){
				succParent = succ;
				succ = succ->left;
			}
			if (succParent != node){
				succParent->left = succ->right;
			}
			else{
				succParent->right = succ->right;
			}
			node->data = succ->data;
			delete succ;
			return node;
		}
	}
}

int main() {
	BinaryTree Tree;
	Tree.createNode(151);
	Tree.createNode(10);
	Tree.createNode(20);
	Tree.createNode(100);
	Tree.createNode(301);
	Tree.createNode(151);
	Tree.createNode(301);
	Tree.printNode();
	Tree.deletion(151);
	Tree.deletion(20);
	Tree.printNode();
	return 0;
}