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
public:
 int ans = 0;
vector<int> fun(TreeNode* curr)
{
    if(curr==NULL)
    {
        return {0,0};
    }
    vector<int> left = fun(curr->left);
    vector<int> right = fun(curr->right);
    int sum = left[0] + right[0] + curr->val;
    int count = left[1] + right[1] + 1;
    if(sum/count == curr->val)
    {
        ans++;
    }
    return {sum,count};
}
    int averageOfSubtree(TreeNode* root) {
        fun(root);
        return ans;
    }
};