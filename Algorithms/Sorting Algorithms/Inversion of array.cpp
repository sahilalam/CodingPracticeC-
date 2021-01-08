void merge(long long *arr,int s1,int e1,int s2,int e2,long long int &ans)
{
    vector<long long> tmp;
    while(s1<=e1 && s2<=e2)
    {
        if(arr[s1]<=arr[s2])
        {
            tmp.push_back(arr[s1]);
            s1++;
        }
        else
        {
            ans=ans+(e1-s1+1);
            tmp.push_back(arr[s2]);
            s2++;
        }
    }
    while(s1<=e1)
    {
        tmp.push_back(arr[s1]);
        s1++;
    }

    while(s2<=e2)
    {
        tmp.push_back(arr[s2]);
        s2++;
    }
    while(!tmp.empty())
    {
        arr[e2]=tmp[tmp.size()-1];
        e2--;
        tmp.pop_back();
    }
}
void fn(long long *arr,int i,int j,long long int &ans)
{
    if(i>=j)
    {
        return;
    }
    int mid=(i+j)/2;
    fn(arr,i,mid,ans);
    fn(arr,mid+1,j,ans);
    merge(arr,i,mid,mid+1,j,ans);
}
long long int inversionCount(long long arr[], long long N)
{
    long long int ans=0;
    fn(arr,0,N-1,ans);
    return ans;
}

