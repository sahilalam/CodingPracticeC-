//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int x=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>0)
	        {
	            x++;
	            swap(arr[x],arr[i]);
	        }
	    }

	}
};
