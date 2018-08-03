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

class KthNumber:
    def findKth(self, k):
        ret = []
        ret.append(1)
        t3 = 0
        t5 = 0
        t7 = 0
        for i in range(1,k+1):
            v = min(ret[t3]*3,min(ret[t5]*5,ret[t7]*7))
            ret.append(v)
            if ret[i] == ret[t3]*3: t3 += 1
            if ret[i] == ret[t5]*5: t5 += 1
            if ret[i] == ret[t7]*7: t7 += 1
        return ret[k]