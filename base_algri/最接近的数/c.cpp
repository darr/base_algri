/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class CloseNumber {
public:
    //run:3ms memory:504k
    vector<int> getCloseNumber(int x) {
        vector<int> ret;
        int count = getOneCount(x);
        int lower = x-1;
        int larger = x+1;
        while(getOneCount(lower) != count) lower--;
        ret.push_back(lower);
        while(getOneCount(larger) != count) larger++;
        ret.push_back(larger);
        return ret;
    }
    
    int getOneCount(int x){
        int count = 0;
        for(;x;count++) x= x&(x-1);
        return count;
    }
};