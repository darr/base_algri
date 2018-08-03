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


class Zipper:
    #run:38ms memory:5732k
    def zipString(self,iniString):
        temp = iniString[0]
        counter = 0
        ret = ''
        for x in iniString:
            if x == temp:
                counter += 1
            else:
                ret += str(temp) + str(counter)
                temp = x
                counter = 1
        ret += str(temp) + str(counter)
        if len(ret) > len(iniString):
            return iniString
        else:
            return ret