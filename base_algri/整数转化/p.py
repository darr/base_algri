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


class Transform:
    #run:32ms memory:5728k
    def calcCost(self, A, B):
        C = A^B
        return self.getOneCount(C)
    
    def getOneCount(self,x):
        count =0
        while x:
            count += 1
            x = x & (x -1)
        return count