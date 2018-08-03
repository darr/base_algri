/////////////////////////////////////
// File name : j.java
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


import java.util.*;

/*
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;
    public TreeNode(int val) {
        this.val = val;
    }
}*/
public class Successor {
    //run:32ms memory:10444k
    private TreeNode pre = new TreeNode(-1);
    public int findSucc(TreeNode root, int p) {
        if (root == null) return -1;
        int ret = findSucc(root.left, p);
        if (ret == -1) {
            if (pre.val == p) return root.val;
            pre = root; 
            return findSucc(root.right, p);
        }
        return ret;
    }
}