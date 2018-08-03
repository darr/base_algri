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
class Remove {
public:
    //run:2ms memory:480k
    bool removeNode(ListNode* pNode) {
        if(NULL == pNode) return false;
        if(NULL == pNode->next) return false;
        ListNode* pNext = pNode->next;
        pNode->val = pNext->val;
        pNode->next = pNext->next;
        free(pNext);
        return true;
    }
};