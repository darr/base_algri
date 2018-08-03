/////////////////////////////////////
// File name : j.java
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

import java.util.*;

public class Ants {
    //run:62ms memory:10584k
    public double antsCollision(int n) {
        int sum = 1;
        for(int i=0;i<n;i++) 
            sum = 2 * sum ;
        return (1 - (double)2/sum);
    }
}