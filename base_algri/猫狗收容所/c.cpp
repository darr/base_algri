/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class CatDogAsylum {
public:
    //run:4ms memeory:480k
    vector<int> asylum(vector<vector<int> > ope) {
        queue<int> cat;
        queue<int> dog;
        vector<int> ret;
        int index=0;
        for(int i = 0; i < ope.size(); i++){
            vector<int> item = ope[i];
            if(item[0] == 1)
                if(item[1] >= 0) push_queue(dog,item[1],index++);
                else push_queue(cat,item[1],index++);
            if(item[0] == 2){
                if(item[1] == 0){
                    int min=0;
                    if(cat.empty() && !dog.empty()) min=1;
                    if(!cat.empty() && dog.empty()) min=-1;
                    if(!cat.empty() && !dog.empty()) min=dog.front() > cat.front() ? -1:1;
                    if(min==-1) pop_queue(cat,ret);
                    if(min==1) pop_queue(dog,ret);      
                }
                if(item[1]==1&&!dog.empty()) pop_queue(dog,ret);
                if(item[1]==-1&&!cat.empty()) pop_queue(cat,ret);
            }
        }
        return ret;
    }

    void push_queue(queue<int> &q, int value,int index){
         q.push(index);
         q.push(value);
    }
    
    void pop_queue(queue<int> &q,vector<int> &ret){
        q.pop();
        ret.push_back(q.front());
        q.pop();
    }
    
    vector<int> asylum2(vector<vector<int> > ope) {
        queue<int> cat;
        queue<int> dog;
        vector<int> vec;
        int index=0;
        int size1=ope.size();
        for(int i=0;i<size1;i++){
            int kind=ope[i][0];
            if(kind==1){
                if(ope[i][1]>=0){
                    dog.push(index++);
                    dog.push(ope[i][1]);
                }else{
                    cat.push(index++);
                    cat.push(ope[i][1]);
                }
            }else{
                if(ope[i][1]==0){
                    int min=0;
                    if(cat.empty()&&!dog.empty()) min=1;
                    if(!cat.empty()&&dog.empty()) min=-1;
                    if(!cat.empty()&&!dog.empty()) min=dog.front()>cat.front()?-1:1;
                    if(min==-1){
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                    if(min==1){
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                }
                else{
                    if(ope[i][1]==1&&!dog.empty()){
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                    if(ope[i][1]==-1&&!cat.empty()){
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                }

            }
        }
        return vec;
    }
};