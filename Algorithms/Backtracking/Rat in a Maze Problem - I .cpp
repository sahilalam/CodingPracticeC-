// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
void fn(int m[MAX][MAX],int n,int i,int j,string &s,vector<string> &ans)
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(s);
        return ;
    }
    if(i+1<n && m[i+1][j]!=0 && m[i+1][j]!=-1)
    {
        m[i+1][j]=-1;
        s.push_back('D');
        fn(m,n,i+1,j,s,ans);
        s.pop_back();
        m[i+1][j]=1;
    }
    if(i-1>=0 && m[i-1][j]!=0 && m[i-1][j]!=-1)
    {
        m[i-1][j]=-1;
        s.push_back('U');
        fn(m,n,i-1,j,s,ans);
        s.pop_back();
        m[i-1][j]=1;
    }
    if(j-1>=0 && m[i][j-1]!=0 && m[i][j-1]!=-1)
    {
        m[i][j-1]=-1;
        s.push_back('L');
        fn(m,n,i,j-1,s,ans);
        s.pop_back();
        m[i][j-1]=1;
    }
    if(j+1<n && m[i][j+1]!=0 && m[i][j+1]!=-1)
    {
        m[i][j+1]=-1;
        s.push_back('R');
        fn(m,n,i,j+1,s,ans);
        s.pop_back();
        m[i][j+1]=1;
    }

}
vector<string> findPath(int m[MAX][MAX], int n) {
    vector<string> ans;
    string s;
    if(m[0][0]==0)
    {
        return ans;
    }
    m[0][0]=-1;
    fn(m,n,0,0,s,ans);
    m[0][0]=1;
    sort(ans.begin(),ans.end());
    return ans;
}
