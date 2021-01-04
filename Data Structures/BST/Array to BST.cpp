#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
Node* fn(int *a,int i,int j)
{
    if(i>j)
    {
        return NULL;
    }

    int mid=(i+j)/2;
    Node* root=new Node(a[mid]);
    root->left=fn(a,i,mid-1);
    root->right=fn(a,mid+1,j);
    return root;
}
void pre(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    Node* root=fn(a,0,n-1);
	    pre(root);
	    cout<<endl;

	}
	return 0;
}
