/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Transform {
public:
    //run:3ms memory:480k
    int calcCost(int A, int B) {
        int C = A^B;
        return getOneCount(C);
    }
    
    int getOneCount(int x){
        int count = 0;
        for(;x;count++) x = x & (x-1);
        return count;
    }
};