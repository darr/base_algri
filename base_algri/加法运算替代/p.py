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


class AddSubstitution:
    #run:43ms memory:5724k
    def calc(self, a, b, t):
        if t == 1: return a * b
        elif t == 0: return a / b
        else: return a - b