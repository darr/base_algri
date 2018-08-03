/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class BinDecimal {
public:
    //run:3ms memory:484k
    string printBin(double num) {
        string str("0.");
        double base = 0.5;
        for(;num >0; base /=2){
            if (num >= base){
                num -= base;
                str += "1";
            }else str += "0";
            if(str.size() > 32) return str = "Error";
        }
        return str;
    }
    //run:3ms memory:476k
    string printBin2(double num) {
        string str("0.");
        double base = 0.5;
        while(num > 0){
            if(num >= base){
                num -= base;
                str += "1";
            }
            else 
                str += "0";
            base /= 2;
            if(str.size() > 32) 
                return str = "Error";
        }
        return str;
    }
};