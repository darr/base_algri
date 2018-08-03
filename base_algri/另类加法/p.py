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


class UnusualAdd:
    #run:46ms memory:5604k
    def addAB(self, A, B):
        if 0 == A: return B
        if 0 == B: return A
        return self.addAB(A^B,(A&B)<<1)