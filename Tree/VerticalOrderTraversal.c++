class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty()){
            auto p = q.front();

            q.pop();

            TreeNode* node = p.first;

            int line = p.second.first;
            int lvl = p.second.second;

            mp[line][lvl].insert(node -> val);

            if(node -> left != NULL)
            {
                q.push({node -> left,{line - 1,lvl + 1}});
            }

            if(node -> right != NULL)
            {
                q.push({node -> right,{line + 1,lvl + 1}});
            }
        }
        vector<vector<int>> ans;

        for(auto k : mp){
            vector<int> c;
            for(auto m: k.second){

                c.insert(c.end(),m.second.begin(),m.second.end());
            }
            ans.push_back(c);
        }

        return ans;
        
    }

    // S.C = O(N)
    // T.C = O(N * log n * log n * log n)

    // auto s = m.second

    // for(auto it = s.begin(); it != s.end(); ++it)
    // {
    //     res.push_back(*it);
    // }

    // .push_back()
    // .insert(pos,val)

    // v.insert()

};
