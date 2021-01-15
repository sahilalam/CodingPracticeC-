int minSwap(int *arr, int n, int k) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            c++;
        }
    }
    int ans=0;
    for(int i=0;i<c;i++)
    {
        if(arr[i]>k)
        {
            ans++;
        }
    }
    int tmp=ans;
    for(int i=c;i<n;i++)
    {

        if(arr[i-c]>k)
        {
            tmp--;
        }
        if(arr[i]>k)
        {
            tmp++;
        }
        ans=min(tmp,ans);
    }
    return ans;
}
