/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */
void fn(Node* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    fn(root->left,ans);
    ans.push_back(root->data);
    fn(root->right,ans);
}
vector<int> inOrder(Node* root)
{
    vector<int> ans;
    fn(root,ans);
    return ans;
}
