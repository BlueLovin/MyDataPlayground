#include <iostream>

struct Node{
    int value;
    Node *left, *right;

    Node(int value){
        this->value = value;
        this->left = this->right = NULL; 
    }
};

int isIdentical(Node* node1, Node* node2){
    if(!node1 && !node2) //if both are null, return 1;
        return 1;
    return(node1 && node2) && //make sure both trees are non-empty
    (node1->value == node2->value) && //check if the current value matches
    isIdentical(node1->left, node2->left) && // recurse down the left branch
    isIdentical(node1->right, node2->right); // recurse down the right branch
}

int height(Node* root){
    if (!root)
        return 0;
    return 1 + std::max(height(root->left), height(root->right));
}

int main(){
    Node* x = NULL;
    x = new Node(15);
    x->left = new Node(10);
	x->right = new Node(20);
	x->left->left = new Node(8);
	x->left->right = new Node(12);
	x->right->left = new Node(16);
	x->right->right = new Node(25);


    Node* y = NULL;
    y = new Node(15);
    y->left = new Node(10);
	y->right = new Node(20);
	y->left->left = new Node(8);
	y->left->right = new Node(12);
	y->right->left = new Node(16);
	y->right->right = new Node(25);

    if (isIdentical(x, y))
		std::cout << "Given binary Trees are identical\n";
	else
		std::cout << "Given binary Trees are not identical\n";

    std::cout << "The height of the given tree is: " << height(x) << std::endl;
    return 0;
}