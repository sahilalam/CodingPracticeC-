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

vector <int> preorder(Node* root)
{
  vector<int> ans;
  stack<Node*> s;
  Node* curr=root;
  while(curr!=NULL || !s.empty())
  {
      while(curr!=NULL)
      {
          ans.push_back(curr->data);
          s.push(curr);
          curr=curr->left;
      }
      curr=s.top();
      s.pop();
      curr=curr->right;
  }
  return ans;
}
