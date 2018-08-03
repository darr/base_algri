/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 10:00
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
class Plus {
public:
// run: 3ms memory:456k
    ListNode* plusAB(ListNode* a, ListNode* b) {
        ListNode* ret = new ListNode(0);
        ListNode* p = ret;
        int j=0;
        while(NULL!=a || NULL!=b || j!=0){
            ListNode* s = new ListNode(0);
            s->val += j;
            if (NULL!=a) s->val += a->val;
            if (NULL!=a) a = a->next;
            if (NULL!=b) s->val += b->val;
            if (NULL!=b) b = b->next;
            if (s->val >= 10) j=1; else j = 0;
            if (s->val >=10) s->val -= 10;
            p = p->next = s;
        }
        ListNode* r = ret->next;
        free(ret);
        return r;
    }

// run:2ms memory:476k
    ListNode* plusAB2(ListNode* a, ListNode* b) {
        ListNode* ret = new ListNode(0);
        ListNode* p = ret;
        int j=0;
        while(NULL!=a || NULL!=b || j!=0){
            ListNode* s = new ListNode(0);
            s->val += j;
            if (NULL!=a) {
                s->val += a->val;
                a = a->next;
            }
            if (NULL!=b) {
                s->val += b->val;
                b = b->next;
            }
            if (s->val >= 10) {
                j=1;
                s->val -= 10;
            }else{
                j=0;
            }
            p->next = s;
            p = p->next;
        }
        ListNode* r = ret->next;
        free(ret);
        return r;
    }

// run:4 memory:608k
    ListNode* plusAB3(ListNode* a, ListNode* b) {
        ListNode* ret = new ListNode(0);
        ListNode* p = ret;
        int j=0;
        while(NULL!=a && NULL!=b){
            ListNode* s = new ListNode(0);
            s->val = a->val + b->val + j;
            if (s->val >= 10){
                j = 1;
                s->val -= 10;
            }else
                j = 0;
            p->next = s;
            p = p->next;
            a = a->next;
            b = b->next;
        }
        while(NULL!=a){
            ListNode* s = new ListNode(0);
            s->val = a->val + j;
            if (s->val >= 10){
                j = 1;
                s->val -= 10;
            }else
                j = 0;
            p->next = s;
            p = p->next;
            a = a->next;
        }
        while(NULL!=b){
            ListNode* s = new ListNode(0);
            s->val = b->val + j;
            if (s->val >= 10){
                j = 1;
                s->val -= 10;
            }else
                j = 0;
            p->next = s;
            p = p->next;
            b = b->next;
        }
        if (1 == j){
            ListNode* s = new ListNode(1);
            p->next = s;
        }
        ListNode* r = ret->next;
        free(ret);
        return r;
    }
};

