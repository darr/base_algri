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


class Max:
    #run:40ms memory:5688k
    def getMax(self, a, b):
        b = a - b
        a -= b&(b>>31)
        return a