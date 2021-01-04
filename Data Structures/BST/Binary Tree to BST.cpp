//User function template for C++

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// The given root is the root of the Binary Tree
// Return the root of the generated BST
int cn(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+cn(root->left)+cn(root->right);
}
void fill(Node* root,int *tmp,int &i)
{
    if(root==NULL)
    {
        return ;
    }
    fill(root->left,tmp,i);
    tmp[i]=root->data;
    i++;
    fill(root->right,tmp,i);
}
void fn(Node* root,int *tmp,int &i)
{
    if(root==NULL)
    {
        return ;
    }
    fn(root->left,tmp,i);
    root->data=tmp[i];
    i++;
    fn(root->right,tmp,i);
}
Node *binaryTreeToBST (Node *root)
{
    int n=cn(root);
    int *tmp=new int[n];
    int i=0;
    fill(root,tmp,i);
    sort(tmp,tmp+n);
    i=0;
    fn(root,tmp,i);
    return root;
}
