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

class Successor {
    //run:5ms memory:504k
    TreeNode* pre = new TreeNode(-1);
public:
    int findSucc(TreeNode* root, int p){
        if (NULL == root) return -1;
        int ret = findSucc(root->left,p);
        if (-1 == ret){
            if (pre->val == p) return root->val;
            pre = root;
            return findSucc(root->right,p);
        }
        return ret;
    }
};