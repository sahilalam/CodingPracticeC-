/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
void dfs(vector<int> *g,bool *v,int n,int p,vector<int> &ans)
{
    v[n]=true;
    ans.push_back(n);
    for(auto d:g[n])
    {
        if(!v[d] && d!=p)
        {
            dfs(g,v,d,n,ans);
        }
    }
}

vector <int> dfs(vector<int> g[], int N)
{
    bool *v=new bool[N];
    for(int i=0;i<N;i++)
    {
        v[i]=false;
    }
    vector<int> ans;
    dfs(g,v,0,-1,ans);
    return ans;

}
