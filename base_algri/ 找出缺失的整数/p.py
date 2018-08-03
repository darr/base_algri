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

class Finder:
    #run:165ms memory:5736k
    def findMissing(self, numbers, n):
        for i in range(len(numbers)):
            if i % 2 != numbers[i][0]: return i
        return n