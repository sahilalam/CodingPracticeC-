/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
Node* fn(int *in,int *pre,int n,int i,int j,int &k)
{
    if(i>j || k==n)
    {
        return NULL;
    }
    Node *tmp=new Node(pre[k]);
    k++;
    int ind=-1;
    for(int x=i;x<=j;x++)
    {
        if(in[x]==(tmp->data))
        {
            ind=x;
            break;
        }
    }
    if(ind!=-1)
    {
        tmp->left=fn(in,pre,n,i,ind-1,k);
        tmp->right=fn(in,pre,n,ind+1,j,k);
    }
    return tmp;
}
Node* buildTree(int in[],int pre[], int n)
{
    int i=0;
    return fn(in,pre,n,0,n-1,i);
}
