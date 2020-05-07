/**
 * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 */
class Solution {
public:
    vector<int> find_ans(TreeNode* root, int ans, int depth, int parent)
    {
        if (root==NULL) return {};
        if(root->val==ans) return {depth, parent};
        else
        {
            parent=root->val;
            vector<int> left = find_ans(root->left, ans, depth+1, parent);
            vector<int> right = find_ans(root->right, ans ,depth+1, parent);
            
            if(right.empty()) return left;
            else return right;
        }
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
        
        /*
        //This solution failed at test case 83/103
        vector <TreeNode*> cur;
        vector <TreeNode*> next;
        int foundx,foundy=0;
        cur.push_back(root);
        while(!cur.size())
        {
            for(const auto &p : cur)
            {
                if(p->val==x) foundx=1;
                if(p->val==y) foundy=1;
                if(p->left) next.push_back(p->left);
                if(p->right) next.push_back(p->right);
            }
            if(foundx && foundy) return true;
            foundx=0;
            foundy=0;
            swap(next,cur);
            next.clear();
        }
        return false;*/
        
        vector<int> var_one = find_ans(root, x, 0, -1);
        vector<int> var_two = find_ans(root, y, 0, -1);

        
        if( (!var_one.empty() && !var_two.empty()) && (var_one[0]==var_two[0]) && (var_one[1]!=var_two[1]) )            return true;
        else
            return false;
    }
};