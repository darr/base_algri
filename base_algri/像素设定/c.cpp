/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class Render {
public:
    //run:4ms  memory:588k
    vector<int> renderPixel(vector<int> screen, int x, int y) {
        for(int i = x ; i <= y ; i++)
            screen[i/8] = screen[i/8] | (1<< (i % 8));
        return screen ;
    }
};