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


class Different:
    #run:28ms memory:5732k
    def checkDifferent(self, iniString):
        return len(iniString)==len(set(iniString))
    
    def checkDifferent2(self, iniString):
        size = len(iniString)
        if size > 257: return False
        for i in range(0,size):
            for j in range(i+1,size):
                if iniString[i] == iniString[j]:
                    return False
        return True