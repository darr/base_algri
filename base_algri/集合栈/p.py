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

class SetOfStacks:
#run:61ms memory:5712k
    def setOfStacks(self, ope, size):
        if size < 1: return None
        if None == ope: return None
        ret = []
        lt = []
        for i in range(len(ope)):
            item = ope[i]
            if item[0] == 1:
                if len(lt) == size:
                    ret.append(lt)
                    lt = []
                lt.append(item[1])
            else:
                if (len(ret) == 0 and len(lt) == 0):pass
                else:
                    if len(lt) == 0:lt = ret.pop()
                    lt.pop()
        ret.append(lt)
        return ret