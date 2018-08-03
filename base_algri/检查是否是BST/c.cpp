/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////



/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class Checker {
public:
    //run:4ms memory:472k
    bool checkBST(TreeNode* root) {
        if (NULL == root) return true;
        if (NULL != root->left){
            if (root->left->val > root->val) return false;
            if (root->left->right && (root->left->right->val > root->val)) return false;
        }
        if (NULL != root->right){
            if (root->right->val < root->val) return false;
            if (root->right->left && (root->right->left->val < root->val)) return false;
        }
        return checkBST(root->left) && checkBST(root->right);
    }
};