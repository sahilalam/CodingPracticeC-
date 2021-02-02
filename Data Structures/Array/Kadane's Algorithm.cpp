// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){

    int ans=INT_MIN;
    int tmp=0;
    for(int i=0;i<n;i++)
    {
        tmp=tmp+arr[i];
        ans=max(tmp,ans);
        if(tmp<0)
        {
            tmp=0;
        }
    }
    return ans;
}
