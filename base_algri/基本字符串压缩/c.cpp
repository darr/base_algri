/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Zipper {
public:
    //run:7ms memory:608k
    string zipString(string iniString){
        string str;
        int i = 0;
        int j = 0;
        while(i < iniString.length()){
            while(iniString[i] == iniString[j]) i++;
            str += iniString[j];
            str += to_string(i-j);
            j = i;
        }
        if(iniString.length() < str.length()) return iniString;
        else return str;
    }
};