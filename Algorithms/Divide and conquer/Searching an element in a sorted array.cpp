// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
bool fn(int *arr,int i,int j,int k)
{
    if(i>j)
    {
        return false;
    }
    int mid=(i+j)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return fn(arr,mid+1,j,k);
    }
    return fn(arr,i,mid-1,k);
}
int searchInSorted(int arr[], int N, int K)
{
    if(fn(arr,0,N-1,K))
    {
        return 1;
    }
    return -1;

}
