/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class TreeLevel {
public:
    //run:4ms memory:476k
    ListNode* head = new ListNode(-1);
    ListNode* p = head;
    ListNode* getTreeLevel(TreeNode* root, int dep) {
        if (NULL == root || dep <= 0) return NULL;
        if (1 == dep){
            ListNode* tmp = new ListNode(root->val);
            p->next = tmp;
            p = p->next;
        }else{
            getTreeLevel(root->left,dep - 1);
            getTreeLevel(root->right,dep - 1);
        }
        return head->next;
    }
};