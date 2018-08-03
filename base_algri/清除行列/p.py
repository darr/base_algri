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


class Clearer:
    #run:1965ms memory:5696k 
    def clearZero(self, mat, n):
        tmp = []
        for i in range(n):
            for j in range(n):
                if mat[i][j] == 0: tmp.append(i*n+j)
                    
        for i in range(len(tmp)):
            row = tmp[i] / n
            col = tmp[i] % n
            for k in range(n):
                mat[row][k] = 0
                mat[k][col] = 0
        return mat