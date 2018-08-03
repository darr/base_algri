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
    #run:263ms memory:5732k
    def transformImage(self, mat, n):
        a = None
        for i in range(n/2):
            for j in range(n):
                a = mat[i][j]
                mat[i][j] = mat[n-i-1][j]
                mat[n-i-1][j] = a
        for i in range(n):
            for j in range(i):
                a = mat[j][i]
                mat[j][i] = mat[i][j]
                mat[i][j] = a
        return mat