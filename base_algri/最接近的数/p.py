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


class CloseNumber:
    #run:38ms memory:5732k
    def getCloseNumber(self, x):
        ret = []
        lower = x - 1
        larger = x + 1
        count = self.getOneCount(x)
        while self.getOneCount(lower) != count: lower -= 1
        ret.append(lower)
        while self.getOneCount(larger) != count: larger += 1
        ret.append(larger)
        return ret
    
    def getOneCount(self,x):
        count = 0;
        while x:
            count += 1
            x = x & (x -1)
        return count