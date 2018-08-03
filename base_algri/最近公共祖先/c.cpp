/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////



class LCA {
public:
    //run:2ms memeory:468k
    int getLCA(int a, int b) {
        while(a != b){
            if (a>b) a /=2;
            if (b>a) b /=2;
        }
        return a;
    }
};