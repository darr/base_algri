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
class Balance:
    #run:27ms memory:5736k
    def isBalance(self, root):
        if None == root: return True
        if None == root.left and None == root.right: return True
        if None != root.left and None == root.right:
            if self.getTreeHeight(root.left) > 1: return False
        if None == root.left and None != root.right: 
            if self.getTreeHeight(root.right) > 1:return False
        return self.isBalance(root.left) and self.isBalance(root.right) + 1
            
    def getTreeHeight(self,root):
        if None == root: return 0
        return max(self.getTreeHeight(root.left),self.getTreeHeight(root.right)) + 1