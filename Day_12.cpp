//Two Sum IV-inpust is a BST

class Solution {
public:
     void inorder(TreeNode* root,vector<int>&v){
         if(root==NULL) return;
         inorder(root->left,v);
         v.push_back(root->val);
         inorder(root->right,v);
         return;
     }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,v);
        int s=0,e=v.size()-1;
        int sum=v[s]+v[e];
        while(s<e){
            if(sum==k) return true;
            else if(sum>k) e--;
            else s++;
            sum=v[s]+v[e];
        }
        return false;
    }
};

