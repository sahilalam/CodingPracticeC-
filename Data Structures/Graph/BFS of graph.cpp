/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/
vector <int> bfs(vector<int> g[], int N) {
    queue<int> q;
    vector<int> ans;
    bool *v=new bool[N];
    for(int i=0;i<N;i++)
    {
        v[i]=false;
    }
    q.push(0);
    v[0]=true;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        ans.push_back(top);

        for(auto d:g[top])
        {
            if(!v[d])
            {
                v[d]=true;
                q.push(d);
            }

        }
    }
    return ans;
}
