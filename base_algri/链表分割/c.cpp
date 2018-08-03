/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 10:25
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

/*
 * struct ListNode {
 *     int val;
 *         struct ListNode *next;
 *             ListNode(int x) : val(x), next(NULL) {}
 *             };*/
class Partition {
public:
//run:4ms memory:480k
     ListNode* partition(ListNode* pHead, int x){
        if(pHead==NULL) return NULL;
        ListNode *pNode = pHead;
        ListNode *small = new ListNode(0);
        ListNode *big = new ListNode(0);
        ListNode *pSmall = small;
        ListNode *pBig = big;
        while(pNode){
            if(pNode->val<x){
                pSmall->next = pNode;
                pNode = pNode->next;
                pSmall = pSmall->next;
                pSmall->next = NULL;
            }else{
                pBig->next = pNode;
                pNode = pNode->next;
                pBig = pBig->next;
                pBig->next = NULL;
            }
        }
        pSmall->next = big->next;
        free(big);
        pNode = small->next;
        free(small);
        return pNode;
    }
};

