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


# class Point:
#     def __init__(self, a=0, b=0):
#         self.x = a
#         self.y = b
class Bipartition:
    def getBipartition(self, A, B):
        centerax = (A[0].x+A[1].x+A[2].x+A[3].x)/4.0
        centeray = (A[0].y+A[1].y+A[2].y+A[3].y)/4.0
        centerbx = (B[0].x+B[1].x+B[2].x+B[3].x)/4.0
        centerby = (B[0].y+B[1].y+B[2].y+B[3].y)/4.0
        ret = []
        ret.append((centeray-centerby)/(centerax-centerbx))
        ret.append(centeray- ret[0] * centerax)
        return ret;