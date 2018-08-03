#!/usr/bin/python
# -*- coding: utf-8 -*-
#####################################
# File name : p.py
# Create date : 2018-07-23 08:49
# Modified date : 2018-07-23 08:58
# Author : DARREN
# Describe : not set
# Email : lzygzh@126.com
#####################################

# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Palindrome:
# run:43ms memory:5732k
    def isPalindrome(self, pHead):
        if None == pHead: return True
        if None == pHead.next: return True
        if None == pHead.next.next:
            if pHead.val == pHead.next.val: return True
            else: return False
        ret = True
        lastNode = None
        nextNode = pHead
        pFast = pHead
        pSlow = pHead
        while pFast and pFast.next:
            pFast = pFast.next.next
            nextNode = pSlow.next
            pSlow.next = lastNode
            lastNode = pSlow
            pSlow = nextNode
            nextNode = nextNode.next
        lNode = lastNode
        nNode = pSlow
        if None == pFast:
            if pSlow.val != lastNode.val:ret = False
            else:lastNode = lastNode.next
        while lastNode and nextNode:
            if lastNode.val != nextNode.val:
                ret = False
            lastNode = lastNode.next
            nextNode = nextNode.next
        while lNode:
            tmp = lNode.next
            lNode.next = nNode
            nNode = lNode
            lNode = tmp
        return ret

# run:34ms memory:5728k
    def isPalindrome2(self, pHead):
        if None == pHead: return True
        if None == pHead.next: return True
        if None == pHead.next.next:
            if pHead.val == pHead.next.val: return True
            else: return False
        lastNode = None
        nextNode = pHead
        pFast = pHead
        pSlow = pHead
        while pFast and pFast.next:
            pFast = pFast.next.next
            nextNode = pSlow.next
            pSlow.next = lastNode
            lastNode = pSlow
            pSlow = nextNode
            nextNode = nextNode.next
        if None == pFast:
            if pSlow.val != lastNode.val:return False
            else:lastNode = lastNode.next
        while lastNode:
            if lastNode.val != nextNode.val:return False
            lastNode = lastNode.next
            nextNode = nextNode.next
        return True
