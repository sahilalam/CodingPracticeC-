#include <iostream>
#include<queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int *f=new int[26];
	    for(int i=0;i<26;i++)
	    {
	        f[i]=0;
	    }
	    for(int i=0;i<s.size();i++)
	    {
	        f[s[i]-'a']++;
	    }
	    priority_queue<pair<int,int>> pq;
	    for(int i=0;i<26;i++)
	    {
	        if(f[i])
	        {
	            pq.push(make_pair(f[i],i));
	        }
	    }
	    int i=0;
	    while(!pq.empty())
	    {
	        pair<int,int> p=pq.top();
	        pq.pop();
	        while(i<s.size() && p.first)
	        {
	            s[i]='a'+p.second;
	            i=i+2;
	            p.first--;

	        }
	        if(i>=s.size())
	        {
	            i=1;
	        }
	        while(i<s.size() && p.first)
	        {
	            s[i]='a'+p.second;
	            i=i+2;
	            p.first--;
	        }
	    }
	    bool p=false;
	    for(int i=1;i<s.size();i++)
	    {
	        if(s[i]==s[i-1])
	        {
	            p=true;
	            cout<<'0'<<endl;
	            break;
	        }
	    }
	    if(!p)
	    {
	        cout<<'1'<<endl;
	    }
	}
	return 0;
}
