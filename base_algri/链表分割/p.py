#!/usr/bin/python
# -*- coding: utf-8 -*-
#####################################
# File name : p.py
# Create date : 2018-07-23 08:49
# Modified date : 2018-07-23 10:21
# Author : DARREN
# Describe : not set
# Email : lzygzh@126.com
#####################################

# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Partition:
#run:94ms memeory:5688k
    def partition(self, pHead, x):
        if None == pHead: return None
        pNode = pHead
        small = ListNode(0)
        big = ListNode(0)
        pSmall = small
        pBig = big
        while pNode:
            if pNode.val < x:
                pSmall.next = pNode
                pNode = pNode.next
                pSmall = pSmall.next
                pSmall.next = None
            else:
                pBig.next = pNode
                pNode = pNode.next
                pBig = pBig.next
                pBig.next = None
        pSmall.next = big.next
        return small.next

