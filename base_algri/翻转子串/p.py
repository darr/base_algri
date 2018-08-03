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

class ReverseEqual:
    #run:40ms memory:5728k
    def checkReverseEqual(self, stringA, stringB):
        if("" == stringA and "" == stringB): return True
        sizeA = len(stringA)
        sizeB = len(stringB)
        if(sizeA != sizeB): return False
        lt=[0] * 256
        for i in range(0,sizeA):
            lt[ord(stringA[i])] +=1
            lt[ord(stringB[i])] -=1
        for i in range(0,256):
            if lt[i] != 0: return False
        return True