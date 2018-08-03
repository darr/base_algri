/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Reverse {
public:
    //run:4ms memory:608k
    string reverseString(string iniString){
        for(unsigned i = 0; i < iniString.size() / 2; ++i){
            char tmp = iniString[i];
            iniString[i] = iniString[iniString.size() - i - 1];
            iniString[iniString.size() - i - 1] = tmp;
        }
        return iniString;
    }
};