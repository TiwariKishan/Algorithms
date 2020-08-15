class Solution {
public:
    std::vector<int> color{vector<int>(100001,0)};
    vector<int> adj[100001];
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        for(int i=0;i<prerequisites.size();i++)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        bool cycle=false;
        for(int i=0;i<numCourses;i++)
            if(color[i]==0&&check_cycle(i))
                {cycle=true;
                 break;}
        vector<int> ans;
        if(!cycle)
        {   color.clear();
            color.resize(100001,0);
            for(int i=0;i<numCourses;i++)
               if(color[i]==0)
                topo_sort(ans,i);
         reverse(ans.begin(),ans.end());
        }
      return ans;
    }
    void topo_sort(vector<int> &ans,int s)
    {
        color[s]=1;
        for(int i=0;i<adj[s].size();i++)
        {
            if(color[adj[s][i]]==0)
            {
                topo_sort(ans,adj[s][i]);
            }
        }
        ans.push_back(s);
    }
    bool check_cycle(int s)
    {
        color[s]=1;
        for(int i=0;i<adj[s].size();i++)
        {
            if(color[adj[s][i]]==0)
            {
                if(check_cycle(adj[s][i]))
                    return true;
            }
            else if(color[adj[s][i]]==1)
            {
                return true;
            }
        }
              color[s]=2;
              return false;
    }
};
