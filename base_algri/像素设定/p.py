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


class Render:
    #run:56ms memory:5728k
    def renderPixel(self, screen, x, y):
        for i in range(x,y+1):
            screen[i/8] = screen[i/8] | (1<<(i%8))
        return screen