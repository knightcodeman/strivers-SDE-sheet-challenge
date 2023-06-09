#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(!root)return false;
    if(root->data==x)return true;
    bool l=searchInBST(root->left,x);
    if(l)return true;
    bool r=searchInBST(root->right,x);
    if(r)return true;
    return false;
}
