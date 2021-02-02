#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int k;
	    cin>>k;
	    int *f=new int[26];
	    for(int i=0;i<26;i++)
	    {
	        f[i]=0;
	    }
	    int c=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(f[s[i]-'a']==0)
	        {
	            c++;
	        }
	        f[s[i]-'a']++;
	    }
	    if(k>=(26-c) && s.size()>=26)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }

	}
	return 0;
}
