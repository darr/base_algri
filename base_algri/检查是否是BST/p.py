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
class Checker:
    #run:48ms memory:5852k
    def checkBST(self, root):
        if None == root: return True
        if None != root.left:
            if root.left.val > root.val: return False
            if None != root.left.right and root.left.right.val > root.val: return False
        if None != root.right:
            if root.right.val <root.val: return False
            if None != root.right.left and root.right.left.val < root.val: return False
        return self.checkBST(root.left) and self.checkBST(root.right)