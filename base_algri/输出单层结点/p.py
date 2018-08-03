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

# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class TreeLevel:
    #run:51ms memory:5856k
    head = ListNode(-1)
    p = head
    def getTreeLevel(self, root, dep):
        if None == root: return None
        if dep <= 0: return None
        if dep == 1:
            tmp = ListNode(root.val)
            self.p.next = tmp
            self.p = self.p.next
        else:
            self.getTreeLevel(root.left,dep-1)
            self.getTreeLevel(root.right,dep-1)
        return self.head.next
        