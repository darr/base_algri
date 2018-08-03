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



class MaxSum:
    #run:70ms memory:5732k
    def getMaxSum(self, A, n):
        MaxSum = A[0]
        ThisSum = 0
        for i in range(n):
            ThisSum += A[i]
            if ThisSum > MaxSum: MaxSum = ThisSum
            elif ThisSum < 0: ThisSum = 0
        return MaxSum
        