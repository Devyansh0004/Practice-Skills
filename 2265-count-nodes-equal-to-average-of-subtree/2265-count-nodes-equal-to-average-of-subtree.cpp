/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int matchCount=0;
    pair<int,int> postOrder(TreeNode* root){
        if(root==NULL) return {0,0};

        pair<int,int> left=postOrder(root->left);
        pair<int,int> right=postOrder(root->right);


        //subtree also include that node too
        int currNodeSum=left.first+right.first+root->val;
        int currCount=left.second+right.second+1;
        if(currNodeSum/currCount == root->val) matchCount++;

        return {currNodeSum,currCount};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        postOrder(root);
        return matchCount;
    }
};