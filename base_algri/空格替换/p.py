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


class Replacement:
    #run:23ms memory:5732k
    def replaceSpace(self, iniString, length):
        iniString = iniString.replace(" ", "%20")
        return iniString

