/////////////////////////////////////
// File name : c.cpp
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
public class Checker {
    // run: 42ms memory:10128k
    public boolean checkBST(TreeNode root){
        if (null == root) return true;
        if (root.left != null){
            if (root.left.val > root.val) return false;
            if (root.left.right !=null && root.left.right.val > root.val) return false;
        }
        if (root.right != null){
            if(root.right.val < root.val) return false;
            if(root.right.left != null && root.right.left.val < root.val) return false;
        }
        return checkBST(root.left) && checkBST(root.right);
    }
}