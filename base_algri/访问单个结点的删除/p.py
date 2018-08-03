#!/usr/bin/python
# -*- coding: utf-8 -*-
#####################################
# File name : p.py
# Create date : 2018-07-23 08:49
# Modified date : 2018-07-23 13:04
# Author : DARREN
# Describe : not set
# Email : lzygzh@126.com
#####################################



# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
 
class Remove:
    #run:37ms memory:5740k
    def removeNode(self, pNode):
        if None == pNode: return False
        if None == pNode.next:return False
        pNext = pNode.next
        pNode.val = pNext.val
        pNode.next = pNext.next;
        return True