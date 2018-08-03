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


class MinimalBST:
    #run:34ms memory:5624k
    def buildMinimalBST(self, vals):
        height = 0
        size = len(vals)
        while size:
            height += 1
            size /=2
        return height