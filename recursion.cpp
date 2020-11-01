#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        TreeNode* left = new TreeNode();
        TreeNode* right = new TreeNode();
        left = invertTree(root->left);
        right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};

void printTree(TreeNode* root){ //function only works because there are only three elements in this tree
    std::cout<< "val: " <<root->val<<std::endl;
    std::cout << "left: " << root->left->val<<std::endl;
    std::cout << "right: " << root->right->val<<std::endl;
}

int main(){
    TreeNode* root = new TreeNode();
    root->val = 4;
    
    
    TreeNode* left1 = new TreeNode();
    left1->val = 2;

    TreeNode* right1 = new TreeNode();
    right1->val = 7;
    root->left = left1;
    root->right = right1;
    Solution* s = new Solution();
    printTree(root);
    TreeNode* newTree = s->invertTree(root);
    std::cout<<"inverted!:\n";
    printTree(newTree);
    return 0;
}