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


class CrossLine:
    #run:156ms memory:5732k
    def checkCrossLine(self, s1, s2, y1, y2):
        if s1 == s2 and y1 != y2: return False
        return True