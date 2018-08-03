/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class KthNumber {
public:
    //run:3ms memory:504k
    int findKth(int k){
        vector<int> res(k+1,0);
        res[0] = 1;
        int t3 = 0;
        int t5 = 0;
        int t7 = 0;
        for(int i = 1; i <= k; i++){
            res[i] = min(res[t3] * 3, min(res[t5] * 5,res[t7]*7));
            if(res[i] == res[t3] * 3) t3++;
            if(res[i] == res[t5] * 5) t5++;
            if(res[i] == res[t7] * 7) t7++;
        }
        return res[k];
    }
};