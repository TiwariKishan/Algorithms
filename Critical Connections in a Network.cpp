class Solution {
public:
    std:: vector<int>tin,low;
    int timer=0;
    std:: vector<bool> visited;    
    void dfs(int v,vector<vector<int>>& adj,vector<vector<int>> &ans,int p=-1)
    {
        visited[v]=true;
        tin[v]=low[v]=timer++;
        for(auto to : adj[v])
        {
            if(to==p) continue;
            if(visited[to]) low[v]=min(low[v],tin[to]); // means when its anchestor enters
            else
            {
                dfs(to,adj,ans,v);
                low[v]=min(low[v],low[to]);
                if(low[to]>tin[v]) ans.push_back(vector<int>{v,to});    // this is bridge because vertex to doesn't contain any back edge to its anchestor
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        tin.resize(n,-1);
        low.resize(n,-1);
        timer=0;
        visited.resize(n,false);
        vector<vector<int>> ans;
        vector<vector<int> > adj(n);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i=0;i<n;i++)
        if(!visited[i])
        dfs(i,adj,ans);
        return ans;
    }
};
