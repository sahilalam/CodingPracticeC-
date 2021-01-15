/*Complete the function below
Node is as follows:
struct Node
{
    int key;
    struct Node* left, *right;
};
*/
void fn(int *in,int *l,int s1,int e1,int s2,int e2,int x,int y)
{

    int *tmp=new int[y-x+1];
    int k=0;
    for(int i=x;i<=y;i++)
    {
        for(int j=s1;j<=e1;j++)
        {
            if(in[j]==l[i])
            {
                tmp[k]=l[i];
                k++;break;
            }
        }
    }
    for(int i=x;i<=y;i++)
    {
        for(int j=s2;j<=e2;j++)
        {
            if(in[j]==l[i])
            {
                tmp[k]=l[i];
                k++;break;
            }
        }
    }
    k--;
    while(k>=0)
    {
        l[y]=tmp[k];
        k--;y--;
    }

    delete []tmp;
    tmp=NULL;

}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
{
   if(iStart>iEnd)
   {
       return NULL;
   }
   Node* tmp=new Node(levelOrder[0]);
   if(iStart==iEnd)
   {
       return tmp;
   }
   int ind=-1;
   for(int i=iStart;i<=iEnd;i++)
   {
       if(inorder[i]==(tmp->key))
       {
           ind=i;
           break;
       }
   }
   if(ind!=-1)
   {
       fn(inorder,levelOrder,iStart,ind-1,ind+1,iEnd,1,n-1);
       tmp->left=buildTree(inorder,levelOrder+1,iStart,ind-1,ind-iStart);
       tmp->right=buildTree(inorder,levelOrder+(ind-iStart)+1,ind+1,iEnd,iEnd-ind);
   }
   return tmp;

}
