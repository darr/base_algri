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


class Ants:
    #run:32ms memory:5736k
    def antsCollision(self, n):
        sum = 1.0
        for i in range(n):
            sum = 2 * sum
        return 1 - 2/sum;
