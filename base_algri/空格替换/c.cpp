/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Replacement {
public:
    //run:3ms memory:480k
    string replaceSpace(string iniString, int length){
        string tmp;
        for (auto begin = iniString.begin(); begin != iniString.end(); ++begin){
            if(*begin == ' ') tmp +="%20";
            else tmp.push_back(*begin);
        }
        return tmp;
    }
};