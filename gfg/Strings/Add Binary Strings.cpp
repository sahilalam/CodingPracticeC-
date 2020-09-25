class Solution{
public:
	string addBinary(string A, string B)
	{
	    string res;
	    int n=A.size()+B.size();
	    for(int i=0;i<n;i++)
	    {
	        res.push_back('0');
	    }
	    int i=A.size()-1;
	    int j=B.size()-1;
	    int c=0;
	    int k=res.size()-1;
	    while(i>=0 && j>=0)
	    {
	        int tmp=c+(A[i]-'0')+(B[j]-'0');
	        c=tmp/2;
	        res[k]=tmp%2+'0';
	        k--;
	        i--;j--;
	    }
	    while(i>=0)
	    {
	        int tmp=c+(A[i]-'0');
	        c=tmp/2;
	        res[k]=tmp%2+'0';
	        k--;
	        i--;
	    }
	    while(j>=0)
	    {
	        int tmp=c+(B[j]-'0');
	        c=tmp/2;
	        res[k]=tmp%2+'0';
	        k--;
	        j--;
	    }
	    res[k]=c+'0';
	    k=0;
	    while(res[k]=='0')
	    {
	        k++;
	    }
	    return res.substr(k,n-k);
	}
};
