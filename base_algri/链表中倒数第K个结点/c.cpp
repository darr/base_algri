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
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
public:
    //run:3ms memory:476k
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(NULL == pListHead) return NULL;
        if(0 == k) return NULL;
        ListNode* p = pListHead;
        ListNode* res = pListHead;
        for(unsigned int i = 0; i< k; i++)
            if (p) p=p->next;
            else return NULL;
        for(;p;p=p->next)
            res = res->next;
        return res;
    }
     
    ListNode* FindKthToTail2(ListNode* pListHead, unsigned int k) {
        if(NULL == pListHead) return NULL;
        if(0 == k) return NULL;
        ListNode* p = pListHead;
        ListNode* res = pListHead;
        for(unsigned int i = 0; i< k; i++)
            if (p) p=p->next;
            else return NULL;
        while(p) {
            res = res->next;
            p = p->next;
        }
        return res;
    }
};