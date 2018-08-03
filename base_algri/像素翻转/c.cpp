/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Transform {
public:
    //run:17ms memory:740k
    vector<vector<int>> transformImage(vector<vector<int>> mat, int n){
        int a;
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n; j++){
                a = mat[i][j];
                mat[i][j] = mat[n-i-1][j];
                mat[n-i-1][j] = a;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                a = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = a;
            }
        }
        return mat;
    }
};