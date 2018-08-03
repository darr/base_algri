/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class MaxSum {
public:
    //run:6ms memory:488k
    int getMaxSum(vector<int> A, int n) {
        int MaxSum = A[0];
        int ThisSum = 0;
        for (int i =0; i<n;i++){
            ThisSum += A[i];
            if (ThisSum > MaxSum) MaxSum = ThisSum;
            else if(ThisSum < 0) ThisSum = 0;
        }
        return MaxSum;
    }
};