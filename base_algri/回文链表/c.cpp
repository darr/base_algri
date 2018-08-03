/////////////////////////////////////
// File name: c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 08:53
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

class Palindrome {
public:
// run:4ms memory:492k
     bool isPalindrome(ListNode* pHead) {
        if(NULL == pHead) return true;
        if(NULL == pHead->next) return true;
        if(NULL == pHead->next->next)
            if(pHead->val == pHead->next->val) return true;
            else return false;
        bool ret = true;
        ListNode* lastNode = NULL;
        ListNode* nextNode = pHead->next;
        ListNode* pSlow = pHead;
        ListNode* pFast = pHead;
        while(pFast && pFast->next){
            pFast = pFast->next->next;
            pSlow->next = lastNode;
            lastNode = pSlow;
            pSlow = nextNode;
            nextNode = nextNode->next;
        }
        ListNode* lNode = lastNode;
        ListNode* nNode = pSlow;
        if (NULL == pFast)
            if (pSlow->val != lastNode->val) ret = false;
            else lastNode = lastNode->next;
        while(lastNode){
            if (lastNode->val != nextNode->val) {
                ret =  false;
                break;
            }

            lastNode = lastNode->next;
            nextNode = nextNode->next;
        }
        while(lNode){
            ListNode* tmp = lNode->next;
            lNode->next = nNode;
            nNode = lNode;
            lNode = tmp;
        }
        return ret;
    }

// run:5ms memory:600k
    bool isPalindrome2(ListNode* pHead) {
        if(NULL == pHead) return true;
        if(NULL == pHead->next) return true;
        if(NULL == pHead->next->next)
            if(pHead->val == pHead->next->val) return true;
            else return false;
        ListNode* lastNode = NULL;
        ListNode* nextNode = pHead->next;
        ListNode* pSlow = pHead;
        ListNode* pFast = pHead;
        while(pFast && pFast->next){
            pFast = pFast->next->next;
            pSlow->next = lastNode;
            lastNode = pSlow;
            pSlow = nextNode;
            nextNode = nextNode->next;
        }
        if (NULL == pFast)
            if (pSlow->val != lastNode->val) return false;
            else lastNode = lastNode->next;
        while(lastNode){
            if (lastNode->val != nextNode->val) return false;
            lastNode = lastNode->next;
            nextNode = nextNode->next;
        }
        return true;
    }

// run:4ms memory:476k
    bool isPalindrome3(ListNode* pHead) {
        if(NULL == pHead) return true;
        if(NULL == pHead->next) return true;
        if(NULL == pHead->next->next)
            if(pHead->val == pHead->next->val)
                return true;
            else return false;
        ListNode* lastNode = NULL;
        ListNode* nextNode = pHead->next;
        ListNode* pSlow = pHead;
        ListNode* pFast = pHead;
        while(pFast && pFast->next){
            pFast = pFast->next->next;
            pSlow->next = lastNode;
            lastNode = pSlow;
            pSlow = nextNode;
            nextNode = nextNode->next;
        }
        if (NULL == pFast){
            if (pSlow->val != lastNode->val)
                return false;
            else{
                lastNode = lastNode->next;
                while(lastNode){
                    if (lastNode->val != nextNode->val)
                        return false;
                    lastNode = lastNode->next;
                    nextNode = nextNode->next;
                }
            }
        }
        if(NULL == pFast->next){
               while(lastNode){
                    if (lastNode->val != nextNode->val)
                        return false;
                    lastNode = lastNode->next;
                    nextNode = nextNode->next;
                }
        }
        return true;
    }
};

