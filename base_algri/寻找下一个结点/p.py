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


# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Successor:
    #run:43ms memory:5856k
    def __init__(self):
        self.pre = TreeNode(-1)
        
    def findSucc(self, root, p):
        if None == root: return -1
        ret = self.findSucc(root.left,p)
        if -1 == ret:
            if self.pre.val == p: return root.val
            self.pre = root
            return self.findSucc(root.right,p)
        return ret