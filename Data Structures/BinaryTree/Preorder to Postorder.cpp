//User function template in C++


// pre : given preorder if the tree
// size : size of the array
// print postorder traveresal of the tree
Node* fn(int *pre,int n,int &i,int min,int max)
{
    if(i==n)
    {
        return NULL;
    }
    if(pre[i]<max && pre[i]>min)
    {
        Node* x=newNode(pre[i]);
        i++;
        x->left=fn(pre,n,i,min,x->data);
        x->right=fn(pre,n,i,x->data,max);
        return x;
    }
    return NULL;

}
Node* constructTree(int pre[], int size) {
    int i=0;
    Node* root=fn(pre,size,i,INT_MIN,INT_MAX);
    return root;
}

