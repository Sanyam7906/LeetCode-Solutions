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
    // vector<int> ans;
    // void postorder(TreeNode* root)
    // {
    //     if(root == NULL)
    //     {
    //         return ;
    //     }
    //     postorder(root->left);
    //     postorder(root->right); 
    //     ans.push_back(root->val);
    // }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // postorder(root);
        // return ans;
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        while(!st.empty() || curr!=NULL)
        {
            if(curr!=NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                TreeNode* temp = st.top()->right;
                if(temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty() && temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else
                {
                    curr = temp;
                }
            }
        }
        return ans;
    }
};