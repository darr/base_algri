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
    #run:68ms memory:5632k
    def exchangeAB(self, AB):
        AB[0] = AB[0]^AB[1]
        AB[1] = AB[0]^AB[1]
        AB[0] = AB[0]^AB[1]
        return AB
    
    #run:68ms memory:5680k
    def exchangeAB2(self, AB):
        AB[0] = AB[0] + AB[1]
        AB[1] = AB[0] - AB[1]
        AB[0] = AB[0] - AB[1]
        return AB