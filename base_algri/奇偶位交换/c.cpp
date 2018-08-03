/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class Exchange {
public:
    //run:2ms memory:480k
    int exchangeOddEven(int x) {
        return ((x & 0xaaaaaaaa) >> 1 | (x & 0x55555555) << 1);
    }
};