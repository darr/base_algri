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


class Reverse:
    #run:73ms memory:5732k
    def reverseString(self, iniString):
        result = ""
        max_index = len(iniString)
        for i in range(0,max_index):
            result += iniString[max_index-1 - i]
        return result