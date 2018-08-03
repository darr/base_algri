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


class GoUpstairs:
    #run:988ms memory:10452k
    def countWays(self, n):
        lt = []
        lt.append(0)
        lt.append(1)
        lt.append(2)
        lt.append(4)
        for i in range(4,n+1):
            v = (lt[i-1] + ((lt[i-2] + lt[i-3])%1000000007)) % 1000000007
            lt.append(v)
        return lt[n]