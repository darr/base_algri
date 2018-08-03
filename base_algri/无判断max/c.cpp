/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Max {
public:
    //run:5ms memory:472k
    int getMax(int a, int b) {
        b = a-b;//此时b>>31为1则b小于0即a<b,若b>>31为0 则a>b
        a -= b&(b>>31); //若a<b a=a-(a-b),若a>b a=a-0 
        return a;
    }
};