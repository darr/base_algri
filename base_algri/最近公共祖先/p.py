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


class LCA:
    #run:22ms memory:5732k
    def getLCA(self, a, b):
        while a!=b:
            if a>b: a /=2
            if a<b: b /=2
        return a