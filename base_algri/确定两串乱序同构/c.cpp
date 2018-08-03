/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Same {
public:
    //run:8ms memory:484k
    bool checkSam(string stringA, string stringB){
        if("" == stringA && "" == stringB) return true;
        int sizeA = stringA.size();
        int sizeB = stringB.size();
        if(sizeA != sizeB) return false;
        int A[256] = {0};
        for(int i =0;i<sizeA;i++){
            A[stringA[i]]++;
            A[stringB[i]]--;
        }
        for(int i = 0; i<256;i++)
            if(A[i] != 0) return false;
        return true;
    }
};