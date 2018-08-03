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


class BinDecimal:
    def printBin(self, num):
        lt = ["0","."]
        base = 0.5
        while num > 0:
            if num >= base:
                num -= base;
                lt.append("1")
            else:
                lt.append("0")
            base /= 2
            if len(lt) >=32: return "Error"
        return ''.join(lt)
    
    def printBin2(self, num):
        if num >= 1 or num <= 0:
            return "Error"
        binary = ['0', '.']
        while num > 0:
            if len(binary) >= 32:
                return "Error"
            r = num * 2
            if r >= 1:
                binary.append('1')
                num = r - 1
            else:
                binary.append('0')
                num = r
        return ''.join(binary)