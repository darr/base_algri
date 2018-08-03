/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class BinInsert {
public:
    //run:3ms memory:476k
    int binInsert(int n, int m, int j, int i) {
        return n + (m << j);
    }
};