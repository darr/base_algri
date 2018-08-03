/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class CrossLine {
public:
    //run:14ms memory:452k
    bool checkCrossLine(double s1, double s2, double y1, double y2) {
        if (s1 == s2 && y1 != y2) return false;
        return true;
    }
};