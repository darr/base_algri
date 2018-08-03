/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class SetOfStacks {
public:
//run: 5ms memory:496k
    vector<vector<int>> setOfStacks(vector<vector<int>> ope, int size){
        vector<vector<int>> ret;
        int len = ope.size();
        if(len == 0 || size <= 0) return ret;
        vector<int> tmp;
        for (int i = 0; i < len; i++){
            if (ope[i][0] == 1){
                if(tmp.size() == size){
                    ret.push_back(tmp);
                    tmp.clear();
                }
                tmp.push_back(ope[i][1]);
            }else{
                int retSize = ret.size();
                int tmpSize = tmp.size();
                if ((0 == retSize) && (tmpSize == 0))
                    int pass_and_do_nothing_may_you_can_print_something = 0;
                else{
                    if(tmpSize == 0 ){
                        tmp = ret[retSize - 1];
                        ret.pop_back();
                    }
                    tmp.pop_back();
                }
            }
        }
        if (tmp.size()) ret.push_back(tmp);
        return ret;
    }
};
