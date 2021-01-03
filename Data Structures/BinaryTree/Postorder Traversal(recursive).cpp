/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void fn(Node* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    fn(root->left,ans);
    fn(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  vector<int> ans;
  fn(root,ans);
  return ans;
}
