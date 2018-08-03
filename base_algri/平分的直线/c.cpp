/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


/*
struct Point {
    int x;
    int y;
    Point() :
            x(0), y(0) {
    }
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
};*/
class Bipartition {
public:
    //run:5ms memory:476k
    vector<double> getBipartition(vector<Point> A, vector<Point> B) {
        double centerax = (A[0].x+A[1].x+A[2].x+A[3].x)/4.0;
        double centeray = (A[0].y+A[1].y+A[2].y+A[3].y)/4.0;
        double centerbx = (B[0].x+B[1].x+B[2].x+B[3].x)/4.0;
        double centerby = (B[0].y+B[1].y+B[2].y+B[3].y)/4.0;
        vector<double> ret;
        ret.push_back((centeray-centerby)/(centerax-centerbx));
        ret.push_back(centeray- ret[0] * centerax);
        return ret;
    }
};