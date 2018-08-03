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


class Balance {
public:
//rum:3ms memory:408k
    bool isBalance(TreeNode* root) {
        if (NULL == root) return true;
        if (NULL == root->left && NULL == root->right) return true;
        if (NULL != root->left && NULL == root->right)
            if(getTreeHeight(root->left) > 1) return false;
        if (NULL == root->left && NULL != root->right)
            if(getTreeHeight(root->right) >1) return false;
        return isBalance(root->left) && isBalance(root->right);
    }
    int getTreeHeight(TreeNode* root){
        if (NULL == root) return 0;
        return max(getTreeHeight(root->left),getTreeHeight(root->right))+ 1;
    }
};