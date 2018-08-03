/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class UnusualAdd {
public:
    //run:6ms memory:612k
    int addAB(int A, int B) {
        if (0 == A) return B;
        if (0 == B) return A;
        return addAB(A^B,(A&B)<<1);
    }
};