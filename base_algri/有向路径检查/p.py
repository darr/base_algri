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

class Path:
#run:321ms memory:5860k
    def checkPath(self, a, b):
        v1, v2 = set(), set()
        return self.dfs(v1, a, b) or self.dfs(v2, b, a)
    
    def dfs(self,v, t, end):
        if t == end:return True
        if t in v:return False
        v.add(t)
        for x in t.neighbors:
            if self.dfs(v, x, end):return True
        return False
