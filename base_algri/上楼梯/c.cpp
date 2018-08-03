/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class GoUpstairs {
public:
    int countWays(int n) {
        int a[100000];
        a[1] = 1;
        a[2] = 2;
        a[3] = 4;
        for(int i=4;i<=n;i++)
            a[i] = (a[i-1]+(a[i-2]+a[i-3])%1000000007) % 1000000007;
        return a[n];
    }
};