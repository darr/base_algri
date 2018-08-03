/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class TwoStacks {
public:
//run:7ms memory:480k
    vector<int> twoStacksSort(vector<int> numbers) {
        int n = numbers.size();
        if(n<=1)return numbers;
        stack<int> st1;
        stack<int> st2;
        int temp;
        for(int i=0;i<n;i++){
            temp = numbers[i];
            while(!st1.empty() && temp < st1.top()){
                st2.push(st1.top());
                st1.pop();
            }
            st1.push(temp);
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
        vector<int> v;
        while(!st1.empty()){
            v.push_back(st1.top());
            st1.pop();
        }
        return v;
    }
};
