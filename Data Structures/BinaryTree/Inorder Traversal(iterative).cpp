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


// Return a vector containing the inorder traversal of the tree

vector<int> inOrder(Node* root)
{
  vector<int> ans;
  stack<Node*> s;
  Node* curr=root;
  while(curr!=NULL || !s.empty())
  {
      while(curr!=NULL)
      {
          s.push(curr);
          curr=curr->left;
      }
      curr=s.top();
      s.pop();
      ans.push_back(curr->data);
      curr=curr->right;

  }
  return ans;
}
