/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void fn(Node* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    ans.push_back(root->data);
    fn(root->left,ans);
    fn(root->right,ans);
}
vector <int> preorder(Node* root)
{
    vector<int> ans;
    fn(root,ans);
    return ans;
}
