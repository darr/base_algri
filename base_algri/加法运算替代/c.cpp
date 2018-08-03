/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class AddSubstitution {
public:
    //run:5ms memory:472k
    int calc(int a, int b, int type) {
        if (type == 1)
            return a * b;
        else if(type == 0)
            return a / b;
        else
            return a - b;
    }
};