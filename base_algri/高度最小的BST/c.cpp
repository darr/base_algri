/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class MinimalBST {
public:
//run：3ms memory:476k
    int buildMinimalBST(vector<int> vals) {
        int height=0;
        int size = vals.size();
        for (;size;height++,size=size/2);
        return height;
    }
};