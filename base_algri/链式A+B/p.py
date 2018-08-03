#!/usr/bin/python
# -*- coding: utf-8 -*-
#####################################
# File name : p.py
# Create date : 2018-07-23 08:49
# Modified date : 2018-07-23 09:51
# Author : DARREN
# Describe : not set
# Email : lzygzh@126.com
#####################################

# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Plus:
#run: 27ms memory: 5728k
    def plusAB(slef,a,b):
        ret = ListNode(0)
        p = ret
        j = 0
        while(a or b or j!=0):
            s = ListNode(0)
            s.val += j
            if(a): s.val += a.val
            if(a): a = a.next
            if(b): s.val += b.val
            if(b): b = b.next
            if s.val >= 10: j = 1
            else: j = 0
            if s.val >= 10: s.val -= 10
            p.next = s
            p = p.next
        return ret.next

#run: 37ms memory:5628k
    def plusAB2(slef,a,b):
        ret = ListNode(0)
        p = ret
        j = 0
        while(a or b or j!=0):
            s = ListNode(0)
            s.val += j
            if(a):
                s.val += a.val
                a = a.next
            if(b):
                s.val += b.val
                b = b.next
            if s.val >= 10:
                j = 1
                s.val -= 10
            else:
                j = 0
            p.next = s
            p = p.next
        return ret.next

#run: 22ms memory:5856k
    def plusAB3(self, a, b):
        if None == a: return b
        if None == b: return a
        r = ListNode(0)
        p = r
        j = 0
        while(a and b):
            s = ListNode(0)
            s.val = a.val + b.val + j
            if s.val >= 10:
                j = 1
                s.val -= 10
            else:
                j = 0
            p.next = s
            p = p.next
            a = a.next
            b = b.next
        while(a):
            s = ListNode(0)
            s.val = a.val + j
            if s.val >= 10:
                j = 1
                s.val -= 10
            else:
                j = 0
            p.next = s
            p = p.next
            a = a.next
        while(b):
            s = ListNode(0)
            s.val = b.val + j
            if s.val >= 10:
                j = 1
                s.val -= 10
            else:
                j = 0
            p.next = s
            p = p.next
            b = b.next
        if j == 1:
            s = ListNode(1)
            p.next = s
        return r.next

