/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class Different {
public:
    //run:4ms memory:480k
    bool checkDifferent(string iniString){
        int len = iniString.length();
        if(len > 256) return false;
        for (int i = 0; i< len; i++)
            for(int j = i+1; j < len; j++)
                if(iniString[i] == iniString[j]) return false;
        return true;
    }
};