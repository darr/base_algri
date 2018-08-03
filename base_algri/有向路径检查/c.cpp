/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Path {
public:
    bool checkPath(UndirectedGraphNode* a, UndirectedGraphNode* b){
        return check(a,b) || check(b,a);
    }

    bool check(UndirectedGraphNode* a, UndirectedGraphNode* b){
        if (NULL == a || NULL == b) return false;
        if (a == b) return true;
        map<UndirectedGraphNode*, bool> dict;
        queue<UndirectedGraphNode*> que;
        que.push(a);
        while(!que.empty()){
            UndirectedGraphNode* ptr = que.front();
            dict[ptr] = true;
            for(int i = 0; i<ptr->neighbors.size();i++){
                if((ptr->neighbors)[i] == b) return true;
                if(ptr->neighbors[i] && dict[ptr->neighbors[i]]!=true)
                    que.push((ptr->neighbors)[i]);
            }
            que.pop();
        }
        return false;
    }
};