/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Clearer {
public:
    //run:33ms memory:864k
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        vector<int> tmp;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (mat[i][j] == 0) tmp.push_back(i * n + j);
        for (unsigned i = 0; i < tmp.size(); i++){
            int row = tmp[i] / n;
            int col = tmp[i] % n;
            for (int k = 0; k < n; k++){
                mat[row][k] = 0;
                mat[k][col] = 0;
            }
        }
        return mat;
    }
};
