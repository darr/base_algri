/////////////////////////////////////
// File name : j.java
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

import java.util.*;

public class BinInsert {
    //run:21ms memory:9404k
    public int binInsert(int n, int m, int j, int i) {
        return n + (m << j);
    }
}