#include <iostream>
#include<vector>
using namespace std;
class Node
{
  public:
  char data;
  int freq;
  Node* left;
  Node* right;
  Node(char a,int x)
  {
      data=a;
      freq=x;
      left=right=NULL;
  }
};
class minHeap
{
    vector<Node*> v;
    void heapify(int p)
    {
        int l=2*p+1;
        int r=2*p+2;
        int ind=p;
        if(l<v.size() && (v[l]->freq)<=(v[ind]->freq))
        {
            ind=l;
        }
        if(r<v.size() && (v[r]->freq)<=(v[ind]->freq))
        {
            ind=r;
        }
        if(ind!=p)
        {
            swap(v[ind],v[p]);
            heapify(ind);
        }
    }
  public:
  void push(Node* n)
  {
      v.push_back(n);
      int c=v.size()-1;
      while(c>0)
      {
          int p=(c-1)/2;
          if((v[p]->freq)>(v[c]->freq))
          {
              swap(v[p],v[c]);
              c=p;
          }
          else
          {
              break;
          }
      }
  }
  void pop(){
      swap(v[0],v[v.size()-1]);
      v.pop_back();
      heapify(0);
  }
  Node* top()
  {
      return v[0];
  }
  bool isempty()
  {
      return (v.size()==0);
  }
  int size()
  {
      return v.size();
  }
};
void preorder(Node* root,string &s)
{
    if(root->data!='$')
    {
        cout<<s<<" ";
        return;
    }
    s.push_back('0');
    preorder(root->left,s);
    s.pop_back();
    s.push_back('1');
    preorder(root->right,s);
    s.pop_back();
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int *f=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>f[i];
	    }
	    minHeap* m=new minHeap;
	    for(int i=0;i<n;i++)
	    {
	        Node* tmp=new Node(s[i],f[i]);
	        m->push(tmp);
	    }
	    while(m->size()>1)
	    {
	        Node* l=m->top();
	        m->pop();
	        Node* r=m->top();
	        m->pop();
	        Node* n=new Node('$',(l->freq)+(r->freq));
	        n->left=l;
	        n->right=r;
	        m->push(n);
	    }
	    Node* root=m->top();
	    m->pop();
	    string tmp;
	    preorder(root,tmp);
	    cout<<endl;

	}
	return 0;
}
