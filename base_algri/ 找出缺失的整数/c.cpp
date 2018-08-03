/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class Finder {
public:
    //run:15ms memory:736k
    int findMissing(vector<vector<int> > numbers, int n) {
       for(int  i = 0; i < n ; i++)
           if(i % 2!= numbers[i][0]) return i;
       return n;
    }
};