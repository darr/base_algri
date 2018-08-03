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

class Exchange:
    #run:21ms memory:5864k
    def exchangeOddEven(self, x):
         return ((x & 0xaaaaaaaa) >> 1 | (x & 0x55555555) << 1)